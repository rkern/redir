import timeit
import sys
from cStringIO import StringIO

import redirfile


class RedirSys(object):
    def __init__(self, fd=redirfile.STDOUT):
        self.fd = fd
        if fd not in (1,2):
            raise ValueError
        self.streamname = [None, 'stdout', 'stderr'][fd]
        
        self.started = False

    def start(self):
        if not self.started:
            self.buffer = StringIO()
            self.oldstream = getattr(sys, self.streamname)
            setattr(sys, self.streamname, self.buffer)
            self.started = True

    def stop(self):
        if self.started:
            setattr(sys, self.streamname, self.oldstream)
            self.started = False
            return self.buffer.getvalue()
        else:
            return None

tfile = timeit.Timer("rf.start(); print text; rf.stop()", 
setup="""
from redirfile import Redirector
rf = Redirector()
text = 'A'*4192
""",
)
tsys = timeit.Timer("rf.start(); print text; rf.stop()",
setup="""
from timetest import RedirSys
rf = RedirSys()
text = 'A'*4192
""",
)
tfile2 = timeit.Timer("rf.start(); print text; rf.stop()",
setup="""
from redirfile import RedirectorOneFile
rf = RedirectorOneFile()
text = 'A'*4192
""",
)
