import sys

import redirfile as redir
rout = redir.Redirector(redir.STDOUT)
rerr = redir.Redirector(redir.STDERR)

import ctest
import cxxtest
import ftest

rout.start()
rerr.start()
print "Python: stdout"
print >>sys.stderr, "Python: stderr"
ctest.stdout()
ctest.stderr()
cxxtest.stdout()
cxxtest.stderr()
ftest.stdo()
out = rout.stop()
err = rerr.stop()

print 'stdout:'
print repr(out)
print
print 'stderr:'
print repr(err)
