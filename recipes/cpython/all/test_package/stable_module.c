#include <Python.h>

static PyObject *value(PyObject *self, PyObject *args)
{
    (void)self;
    (void)args;
    return PyLong_FromLong(42);
}

static PyMethodDef methods[] = {
    {"value", value, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT, "stable_module", NULL, -1, methods,
    NULL, NULL, NULL, NULL
};

PyMODINIT_FUNC PyInit_stable_module(void)
{
    return PyModule_Create(&module);
}
