#include "Python.h"

void initctest(void); /* Forward */

static PyObject *
ctest_stdout(PyObject *self, PyObject* args)
{
        fprintf(stdout, "C: stdout\n");
        Py_INCREF(Py_None);
        return Py_None;
}

static PyObject *
ctest_stderr(PyObject *self, PyObject* args)
{
	fprintf(stderr, "C: stderr\n");
        Py_INCREF(Py_None);
        return Py_None;
}

static PyMethodDef ctest_methods[] = {
	{"stdout",		ctest_stdout,	METH_NOARGS,
         "Print to stdout."},
        {"stderr",		ctest_stderr,	METH_NOARGS,
	 "Print to stderr."},
	{NULL,		NULL}		/* sentinel */
};

void
initctest(void)
{
	PyImport_AddModule("ctest");
	Py_InitModule("ctest", ctest_methods);
}
