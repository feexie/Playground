#include <stdio.h>
#include <Python.h>

int main() {
	Py_Initialize();
	printf("Python version: %s\n", Py_GetVersion());
	Py_Finalize();
	return 0;
}

