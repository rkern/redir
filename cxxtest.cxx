#include <iostream>
extern "C" {
#include "Python.h"

void initcxxtest(void); /* Forward */

static PyObject *
cxxtest_stdout(PyObject *self, PyObject* args)
{
        std::cout << "C++: stdout" << std::endl;
        Py_INCREF(Py_None);
        return Py_None;
}

static PyObject *
cxxtest_stderr(PyObject *self, PyObject* args)
{
        std::cerr << "C++: stderr" << std::endl;
        Py_INCREF(Py_None);
        return Py_None;
}

static PyMethodDef cxxtest_methods[] = {
	{"stdout",		cxxtest_stdout,	METH_NOARGS,
         "Print to stdout."},
        {"stderr",		cxxtest_stderr,	METH_NOARGS,
	 "Print to stderr."},
	{NULL,		NULL}		/* sentinel */
};

void
initcxxtest(void)
{
	PyImport_AddModule("cxxtest");
	Py_InitModule("cxxtest", cxxtest_methods);
}

}
