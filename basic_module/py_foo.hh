#ifndef PY_FOO_HH
#define PY_FOO_HH

#include <iostream>
#include <Python.h>

PyObject *foo(PyObject *self, PyObject *args) {
    char *txt;
    if (!PyArg_ParseTuple(args, "s", &txt)) {
        return nullptr;
    }
    std::cout << "Hello " << txt << std::endl;
    Py_RETURN_NONE;
}

#endif //PY_FOO_HH
