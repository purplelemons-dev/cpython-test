#include <Python.h>

static PyObject* thing(PyObject* self, PyObject* args) {
    double base, exponent, result;
    if (!PyArg_ParseTuple(args, "dd", &base, &exponent)) 
        return NULL;
    result = pow(base, exponent);
    return Py_BuildValue("d", result);
};

static PyObject* fibbonacci(PyObject* self, PyObject* args) {
    int n,a=0,b=1,result=0;
    if (!PyArg_ParseTuple(args, "i", &n)) 
        return NULL;
    for (int i = 0; i < n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return Py_BuildValue("i", result);
};

static PyMethodDef PowerMethods[] = {
    {"thing", thing, METH_VARARGS, "Calculates the power of two numbers."},
    {"fibbonacci", fibbonacci, METH_VARARGS, "Calculates the fibbonacci sequence."},
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
