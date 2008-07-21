cdef extern from "stdio.h":
    struct FILE:
        pass

    int fflush(FILE *stream)
    int dup(int old)
    int dup2(int oldd, int newd)
    int pipe(int *fildes)
    int close(int fildes)

    FILE *stdout
    FILE *stderr

import os

STDOUT = 1
STDERR = 2

cdef class Redirector:
    cdef int fd
    cdef int oldhandle
    cdef int piper, pipew
    cdef int started

    def __init__(self, int fd=STDOUT):
        self.fd = fd
        self.started = False

    def start(self):
        if not self.started:
            self.oldhandle = dup(self.fd)
            self.piper, self.pipew = os.pipe()
            dup2(self.pipew, self.fd)
            close(self.pipew)

            self.started = True

    cdef void flush(self):
        if self.fd == STDOUT:
            fflush(stdout)
        elif self.fd == STDERR:
            fflush(stderr)

    def stop(self):
        if self.started:
            self.flush()
            dup2(self.oldhandle, self.fd)
            close(self.oldhandle)
            f = os.fdopen(self.piper, 'r')
            output = f.read()
            f.close()

            self.started = False
            return output
        else:
            return None


