import sys

import redirfile

rout = redirfile.Redirector(redirfile.STDOUT)

text = 'A'*(2**20)
rout.start()
sys.stdout.write(text)
out = rout.stop()
print out == text
