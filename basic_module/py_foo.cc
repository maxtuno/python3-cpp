#include "py_foo.hh"

#if PY_MAJOR_VERSION >= 3
static PyMethodDef module_methods[] = {{"foo", (PyCFunction) foo, METH_VARARGS, """Points to the contents of the docstring."""}};

static struct PyModuleDef py_foo = {PyModuleDef_HEAD_INIT, "py_foo", """Docstring for the module; usually a docstring variable created with PyDoc_STRVAR() is used.""", -1, module_methods};

PyMODINIT_FUNC PyInit_py_foo() {
    return PyModule_Create(&py_foo);
}
#endif