#include <Python.h>

static PyObject* thing(PyObject* self, PyObject* args) {
    double base, exponent, result;
    if (!PyArg_ParseTuple(args, "dd", &base, &exponent)) 
        return NULL;
    result = pow(base, exponent);
    return Py_BuildValue("d", result);
};

static PyMethodDef PowerMethods[] = {
    {"thing", thing, METH_VARARGS, "Calculates the power of two numbers."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef powermodule = {
    PyModuleDef_HEAD_INIT,
    "myPower",
    "A module for doing the thing.",
    -1,
    PowerMethods
};

PyMODINIT_FUNC PyInit_myPower(void) {
    return PyModule_Create(&powermodule);
}
