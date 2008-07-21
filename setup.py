from setuptools import *

setup(name="redir",
      ext_modules=[Extension("redirc",
                             sources=["redirc.pyx"],
                            ),
                   Extension("ctest",
                             sources=["ctest.c"],
                            ),
                   Extension("cxxtest",
                             sources=["cxxtest.cxx"],
                            ),
                  ],
)
