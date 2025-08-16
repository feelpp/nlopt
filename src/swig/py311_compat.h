/* py311_compat.h */
#ifndef PY311_COMPAT_H
#define PY311_COMPAT_H
#include <Python.h>
/* Python 3.11+ removed PyEval_CallObject; map to PyObject_CallObject */
#if PY_VERSION_HEX >= 0x030B0000
#  ifndef PyEval_CallObject
#    define PyEval_CallObject(func, args) PyObject_CallObject((func), (args))
#  endif
#endif
#endif