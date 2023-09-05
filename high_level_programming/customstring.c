#include <Python.h>
#include <string.h>

static PyObject* count_elements(PyObject* self, PyObject* args) {
	const char* input_string;
	const char* delimiter;

	if (!PyArg_ParseTuple(args, "ss", &input_string, &delimiter)) {
		return NULL;
	}

	int element_count = 1;
	size_t input_len = strlen(input_string);

	for (size_t i = 0; i < input_len; i++) {
		if (input_string[i] == delimiter[0]) {
			element_count++;
		}
	}

	return PyLong_FromLong(element_count);
}

static PyMethodDef methods[] = {
	{"count_elements", count_elements, METH_VARARGS, "Count elements in a string separated by a delimiter."},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
	PyModuleDef_HEAD_INIT,
	"customstring",
	NULL,
	-1,
	methods
};

PyMODINIT_FUNC PyInit_customstring(void) {
	return PyModule_Create(&module);
}

