/* Generated by Pyrex 0.9.3 on Wed Aug  3 22:21:02 2005 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#include "stdio.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/
static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/
static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/
static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/
static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
staticforward char **__pyx_f;

/* Declarations from redir */

staticforward PyTypeObject __pyx_type_5redir_Redirector;

struct __pyx_obj_5redir_Redirector {
  PyObject_HEAD
  struct __pyx_vtabstruct_5redir_Redirector *__pyx_vtab;
  int fd;
  int oldhandle;
  int piper;
  int pipew;
};

struct __pyx_vtabstruct_5redir_Redirector {
  void ((*flush)(struct __pyx_obj_5redir_Redirector *));
};
static struct __pyx_vtabstruct_5redir_Redirector *__pyx_vtabptr_5redir_Redirector;

static PyTypeObject *__pyx_ptype_5redir_Redirector = 0;
static int __pyx_v_5redir_STDOUT;
static int __pyx_v_5redir_STDERR;
static int __pyx_k3;

/* Implementation of redir */


static PyObject *__pyx_n_sys;
static PyObject *__pyx_n_os;

static PyObject *__pyx_n_False;
static PyObject *__pyx_n_started;

static int __pyx_f_5redir_10Redirector___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_5redir_10Redirector___init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_v_fd;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  static char *__pyx_argnames[] = {"fd",0};
  __pyx_v_fd = __pyx_k3;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "|i", __pyx_argnames, &__pyx_v_fd)) return -1;
  Py_INCREF(__pyx_v_self);

  /* "/Users/kern/projects/redir/redir.pyx":29 */
  ((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->fd = __pyx_v_fd;

  /* "/Users/kern/projects/redir/redir.pyx":30 */
  __pyx_1 = __Pyx_GetName(__pyx_b, __pyx_n_False); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_v_self, __pyx_n_started, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("redir.Redirector.__init__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_pipe;
static PyObject *__pyx_n_True;

static PyObject *__pyx_f_5redir_10Redirector_start(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5redir_10Redirector_start(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  int __pyx_3;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);

  /* "/Users/kern/projects/redir/redir.pyx":33 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_started); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  __pyx_2 = PyObject_IsTrue(__pyx_1); if (__pyx_2 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 33; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_3 = (!__pyx_2);
  if (__pyx_3) {

    /* "/Users/kern/projects/redir/redir.pyx":34 */
    ((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->oldhandle = dup(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->fd);

    /* "/Users/kern/projects/redir/redir.pyx":35 */
    __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_os); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    __pyx_4 = PyObject_GetAttr(__pyx_1, __pyx_n_pipe); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_1 = PyTuple_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    __pyx_5 = PyObject_CallObject(__pyx_4, __pyx_1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_4 = __Pyx_UnpackItem(__pyx_5, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    __pyx_2 = PyInt_AsLong(__pyx_4); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    ((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->piper = __pyx_2;
    __pyx_1 = __Pyx_UnpackItem(__pyx_5, 1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    __pyx_3 = PyInt_AsLong(__pyx_1); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    ((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->pipew = __pyx_3;
    if (__Pyx_EndUnpack(__pyx_5, 2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 35; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;

    /* "/Users/kern/projects/redir/redir.pyx":36 */
    dup2(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->pipew,((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->fd);

    /* "/Users/kern/projects/redir/redir.pyx":37 */
    close(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->pipew);

    /* "/Users/kern/projects/redir/redir.pyx":39 */
    __pyx_4 = __Pyx_GetName(__pyx_b, __pyx_n_True); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 39; goto __pyx_L1;}
    if (PyObject_SetAttr(__pyx_v_self, __pyx_n_started, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 39; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("redir.Redirector.start");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static void __pyx_f_5redir_10Redirector_flush(struct __pyx_obj_5redir_Redirector *__pyx_v_self) {
  int __pyx_1;
  Py_INCREF(__pyx_v_self);

  /* "/Users/kern/projects/redir/redir.pyx":42 */
  __pyx_1 = (__pyx_v_self->fd == __pyx_v_5redir_STDOUT);
  if (__pyx_1) {

    /* "/Users/kern/projects/redir/redir.pyx":43 */
    fflush(stdout);
    goto __pyx_L2;
  }
  __pyx_1 = (__pyx_v_self->fd == __pyx_v_5redir_STDERR);
  if (__pyx_1) {

    /* "/Users/kern/projects/redir/redir.pyx":45 */
    fflush(stderr);
    goto __pyx_L2;
  }
  __pyx_L2:;

  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_WriteUnraisable("redir.Redirector.flush");
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
}

static PyObject *__pyx_n_fdopen;
static PyObject *__pyx_n_r;
static PyObject *__pyx_n_read;
static PyObject *__pyx_n_close;


static PyObject *__pyx_f_5redir_10Redirector_stop(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5redir_10Redirector_stop(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_f;
  PyObject *__pyx_v_output;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_f = Py_None; Py_INCREF(__pyx_v_f);
  __pyx_v_output = Py_None; Py_INCREF(__pyx_v_output);

  /* "/Users/kern/projects/redir/redir.pyx":48 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_started); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}
  __pyx_2 = PyObject_IsTrue(__pyx_1); if (__pyx_2 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 48; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (__pyx_2) {

    /* "/Users/kern/projects/redir/redir.pyx":49 */
    ((struct __pyx_vtabstruct_5redir_Redirector *)((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->__pyx_vtab)->flush(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self));

    /* "/Users/kern/projects/redir/redir.pyx":50 */
    dup2(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->oldhandle,((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->fd);

    /* "/Users/kern/projects/redir/redir.pyx":51 */
    close(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->oldhandle);

    /* "/Users/kern/projects/redir/redir.pyx":52 */
    __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_os); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    __pyx_3 = PyObject_GetAttr(__pyx_1, __pyx_n_fdopen); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_1 = PyInt_FromLong(((struct __pyx_obj_5redir_Redirector *)__pyx_v_self)->piper); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    __pyx_4 = PyTuple_New(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_4, 0, __pyx_1);
    Py_INCREF(__pyx_n_r);
    PyTuple_SET_ITEM(__pyx_4, 1, __pyx_n_r);
    __pyx_1 = 0;
    __pyx_1 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 52; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_v_f);
    __pyx_v_f = __pyx_1;
    __pyx_1 = 0;

    /* "/Users/kern/projects/redir/redir.pyx":53 */
    __pyx_3 = PyObject_GetAttr(__pyx_v_f, __pyx_n_read); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; goto __pyx_L1;}
    __pyx_4 = PyTuple_New(0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; goto __pyx_L1;}
    __pyx_1 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 53; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_v_output);
    __pyx_v_output = __pyx_1;
    __pyx_1 = 0;

    /* "/Users/kern/projects/redir/redir.pyx":54 */
    __pyx_3 = PyObject_GetAttr(__pyx_v_f, __pyx_n_close); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 54; goto __pyx_L1;}
    __pyx_4 = PyTuple_New(0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 54; goto __pyx_L1;}
    __pyx_1 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 54; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    Py_DECREF(__pyx_1); __pyx_1 = 0;

    /* "/Users/kern/projects/redir/redir.pyx":56 */
    __pyx_3 = __Pyx_GetName(__pyx_b, __pyx_n_False); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 56; goto __pyx_L1;}
    if (PyObject_SetAttr(__pyx_v_self, __pyx_n_started, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 56; goto __pyx_L1;}
    Py_DECREF(__pyx_3); __pyx_3 = 0;

    /* "/Users/kern/projects/redir/redir.pyx":57 */
    Py_INCREF(__pyx_v_output);
    __pyx_r = __pyx_v_output;
    goto __pyx_L0;
    goto __pyx_L2;
  }
  __pyx_L2:;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("redir.Redirector.stop");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_f);
  Py_DECREF(__pyx_v_output);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_n_xyzzy;
static PyObject *__pyx_n_start;
static PyObject *__pyx_n_foo;
static PyObject *__pyx_n_stop;

static PyObject *__pyx_k6p;

static char (__pyx_k6[]) = "Bar!";

static PyObject *__pyx_f_5redir_10Redirector_test(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5redir_10Redirector_test(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_xyzzy;
  PyObject *__pyx_v_output;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  int __pyx_4;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  PyObject *__pyx_7 = 0;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return 0;
  Py_INCREF(__pyx_v_self);
  __pyx_v_xyzzy = Py_None; Py_INCREF(__pyx_v_xyzzy);
  __pyx_v_output = Py_None; Py_INCREF(__pyx_v_output);

  /* "/Users/kern/projects/redir/redir.pyx":60 */
  __pyx_1 = __Pyx_Import(__pyx_n_xyzzy, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 60; goto __pyx_L1;}
  Py_DECREF(__pyx_v_xyzzy);
  __pyx_v_xyzzy = __pyx_1;
  __pyx_1 = 0;

  /* "/Users/kern/projects/redir/redir.pyx":61 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_self, __pyx_n_start); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 61; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_3); __pyx_3 = 0;

  /* "/Users/kern/projects/redir/redir.pyx":62 */
  /*try:*/ {

    /* "/Users/kern/projects/redir/redir.pyx":63 */
    __pyx_1 = PyObject_GetAttr(__pyx_v_xyzzy, __pyx_n_foo); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 63; goto __pyx_L3;}
    __pyx_2 = PyTuple_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 63; goto __pyx_L3;}
    __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 63; goto __pyx_L3;}
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    Py_DECREF(__pyx_3); __pyx_3 = 0;

    /* "/Users/kern/projects/redir/redir.pyx":64 */
    if (__Pyx_PrintItem(__pyx_k6p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L3;}
    if (__Pyx_PrintNewline() < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 64; goto __pyx_L3;}
  }
  /*finally:*/ {
    int __pyx_why;
    __pyx_why = 0; goto __pyx_L4;
    __pyx_L2: __pyx_why = 3; goto __pyx_L4;
    __pyx_L3: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_1); __pyx_1 = 0;
      Py_XDECREF(__pyx_2); __pyx_2 = 0;
      Py_XDECREF(__pyx_3); __pyx_3 = 0;
      PyErr_Fetch(&__pyx_1, &__pyx_2, &__pyx_3);
      __pyx_4 = __pyx_lineno;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/Users/kern/projects/redir/redir.pyx":66 */
    __pyx_5 = PyObject_GetAttr(__pyx_v_self, __pyx_n_stop); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
    __pyx_6 = PyTuple_New(0); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
    __pyx_7 = PyObject_CallObject(__pyx_5, __pyx_6); if (!__pyx_7) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 66; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    Py_DECREF(__pyx_6); __pyx_6 = 0;
    Py_DECREF(__pyx_v_output);
    __pyx_v_output = __pyx_7;
    __pyx_7 = 0;
    switch (__pyx_why) {
      case 3: goto __pyx_L0;
      case 4: {
        PyErr_Restore(__pyx_1, __pyx_2, __pyx_3);
        __pyx_lineno = __pyx_4;
        __pyx_1 = 0;
        __pyx_2 = 0;
        __pyx_3 = 0;
        goto __pyx_L1;
      }
    }
  }

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  Py_XDECREF(__pyx_7);
  __Pyx_AddTraceback("redir.Redirector.test");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_xyzzy);
  Py_DECREF(__pyx_v_output);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_False, "False"},
  {&__pyx_n_True, "True"},
  {&__pyx_n_close, "close"},
  {&__pyx_n_fdopen, "fdopen"},
  {&__pyx_n_foo, "foo"},
  {&__pyx_n_os, "os"},
  {&__pyx_n_pipe, "pipe"},
  {&__pyx_n_r, "r"},
  {&__pyx_n_read, "read"},
  {&__pyx_n_start, "start"},
  {&__pyx_n_started, "started"},
  {&__pyx_n_stop, "stop"},
  {&__pyx_n_sys, "sys"},
  {&__pyx_n_xyzzy, "xyzzy"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k6p, __pyx_k6, sizeof(__pyx_k6)},
  {0, 0, 0}
};
static struct __pyx_vtabstruct_5redir_Redirector __pyx_vtable_5redir_Redirector;

static PyObject *__pyx_tp_new_5redir_Redirector(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  struct __pyx_obj_5redir_Redirector *p = (struct __pyx_obj_5redir_Redirector *)o;
  (struct __pyx_vtabstruct_5redir_Redirector *)p->__pyx_vtab = __pyx_vtabptr_5redir_Redirector;
  return o;
}

static void __pyx_tp_dealloc_5redir_Redirector(PyObject *o) {
  struct __pyx_obj_5redir_Redirector *p = (struct __pyx_obj_5redir_Redirector *)o;
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_5redir_Redirector(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_5redir_Redirector *p = (struct __pyx_obj_5redir_Redirector *)o;
  return 0;
}

static int __pyx_tp_clear_5redir_Redirector(PyObject *o) {
  struct __pyx_obj_5redir_Redirector *p = (struct __pyx_obj_5redir_Redirector *)o;
  return 0;
}

static struct PyMethodDef __pyx_methods_5redir_Redirector[] = {
  {"start", (PyCFunction)__pyx_f_5redir_10Redirector_start, METH_VARARGS|METH_KEYWORDS, 0},
  {"stop", (PyCFunction)__pyx_f_5redir_10Redirector_stop, METH_VARARGS|METH_KEYWORDS, 0},
  {"test", (PyCFunction)__pyx_f_5redir_10Redirector_test, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Redirector = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
};

static PySequenceMethods __pyx_tp_as_sequence_Redirector = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Redirector = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Redirector = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

statichere PyTypeObject __pyx_type_5redir_Redirector = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "redir.Redirector", /*tp_name*/
  sizeof(struct __pyx_obj_5redir_Redirector), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_5redir_Redirector, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Redirector, /*tp_as_number*/
  &__pyx_tp_as_sequence_Redirector, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Redirector, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Redirector, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_5redir_Redirector, /*tp_traverse*/
  __pyx_tp_clear_5redir_Redirector, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_5redir_Redirector, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  __pyx_f_5redir_10Redirector___init__, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_5redir_Redirector, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

DL_EXPORT(void) initredir(void); /*proto*/
DL_EXPORT(void) initredir(void) {
  PyObject *__pyx_1 = 0;
  __pyx_m = Py_InitModule4("redir", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_vtabptr_5redir_Redirector = &__pyx_vtable_5redir_Redirector;
  __pyx_vtable_5redir_Redirector.flush = (void *)__pyx_f_5redir_10Redirector_flush;
  if (PyType_Ready(&__pyx_type_5redir_Redirector) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 23; goto __pyx_L1;}
  if (__Pyx_SetVtable(__pyx_type_5redir_Redirector.tp_dict, __pyx_vtabptr_5redir_Redirector) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 23; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Redirector", (PyObject *)&__pyx_type_5redir_Redirector) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 23; goto __pyx_L1;}
  __pyx_ptype_5redir_Redirector = &__pyx_type_5redir_Redirector;

  /* "/Users/kern/projects/redir/redir.pyx":14 */
  __pyx_1 = __Pyx_Import(__pyx_n_sys, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 14; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_sys, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 14; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Users/kern/projects/redir/redir.pyx":15 */
  __pyx_1 = __Pyx_Import(__pyx_n_os, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_os, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Users/kern/projects/redir/redir.pyx":20 */
  __pyx_v_5redir_STDOUT = 1;

  /* "/Users/kern/projects/redir/redir.pyx":21 */
  __pyx_v_5redir_STDERR = 2;

  /* "/Users/kern/projects/redir/redir.pyx":28 */
  __pyx_k3 = __pyx_v_5redir_STDOUT;

  /* "/Users/kern/projects/redir/redir.pyx":59 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("redir");
}

static char *__pyx_filenames[] = {
  "redir.pyx",
};
statichere char **__pyx_f = __pyx_filenames;

/* Runtime support code */

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
    PyObject *__import__ = 0;
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    __import__ = PyObject_GetAttrString(__pyx_b, "__import__");
    if (!__import__)
        goto bad;
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    module = PyObject_CallFunction(__import__, "OOOO",
        name, global_dict, empty_dict, list);
bad:
    Py_XDECREF(empty_list);
    Py_XDECREF(__import__);
    Py_XDECREF(empty_dict);
    return module;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static void __Pyx_UnpackError(void) {
    PyErr_SetString(PyExc_ValueError, "unpack sequence of wrong size");
}

static PyObject *__Pyx_UnpackItem(PyObject *seq, int i) {
  PyObject *item;
  if (!(item = PySequence_GetItem(seq, i))) {
    if (PyErr_ExceptionMatches(PyExc_IndexError))
    	__Pyx_UnpackError();
  }
  return item;
}

static int __Pyx_EndUnpack(PyObject *seq, int i) {
  PyObject *item;
  if (item = PySequence_GetItem(seq, i)) {
    Py_DECREF(item);
    __Pyx_UnpackError();
    return -1;
  }
  PyErr_Clear();
    return 0;
}

static void __Pyx_WriteUnraisable(char *name) {
    PyObject *old_exc, *old_val, *old_tb;
    PyObject *ctx;
    PyErr_Fetch(&old_exc, &old_val, &old_tb);
    ctx = PyString_FromString(name);
    PyErr_Restore(old_exc, old_val, old_tb);
    if (!ctx)
        ctx = Py_None;
    PyErr_WriteUnraisable(ctx);
}

static PyObject *__Pyx_GetStdout(void) {
    PyObject *f = PySys_GetObject("stdout");
    if (!f) {
        PyErr_SetString(PyExc_RuntimeError, "lost sys.stdout");
    }
    return f;
}

static int __Pyx_PrintItem(PyObject *v) {
    PyObject *f;
    
    if (!(f = __Pyx_GetStdout()))
        return -1;
    if (PyFile_SoftSpace(f, 1)) {
        if (PyFile_WriteString(" ", f) < 0)
            return -1;
    }
    if (PyFile_WriteObject(v, f, Py_PRINT_RAW) < 0)
        return -1;
    if (PyString_Check(v)) {
        char *s = PyString_AsString(v);
        int len = PyString_Size(v);
        if (len > 0 &&
            isspace(Py_CHARMASK(s[len-1])) &&
            s[len-1] != ' ')
                PyFile_SoftSpace(f, 0);
    }
    return 0;
}

static int __Pyx_PrintNewline(void) {
    PyObject *f;
    
    if (!(f = __Pyx_GetStdout()))
        return -1;
    if (PyFile_WriteString("\n", f) < 0)
        return -1;
    PyFile_SoftSpace(f, 0);
    return 0;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_SetVtable(PyObject *dict, void *vtable) {
    PyObject *pycobj = 0;
    int result;
    
    pycobj = PyCObject_FromVoidPtr(vtable, 0);
    if (!pycobj)
        goto bad;
    if (PyDict_SetItemString(dict, "__pyx_vtable__", pycobj) < 0)
        goto bad;
    result = 0;
    goto done;

bad:
    result = -1;
done:
    Py_XDECREF(pycobj);
    return result;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
