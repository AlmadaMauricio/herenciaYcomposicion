#include <iostream>
#include <cstdlib>


void cargarFuncion(int vec[], int tam) {
	for (int i = 0; i < tam; i++) {
		vec[i] = i + 1;
	}
}

void mostrarFuncion(int vec[], int tam) {
	for (int i = 0; i < tam; i++) {
		std::cout << vec[i] << "\t";
	}
}

void cambiarValor(int* x) {
	*x = 98;
}

void mostrarDirecciones(int* v, int tam) {
	for (int i = 0; i < tam; i++) {
		std::cout << v + 1 << std::endl;
	}
}


int main() {
	int a = 10, * pEntero;
	int vec[10];
	mostrarDirecciones(vec, 10);
	system("pause");
	return 0;
	cambiarValor(&a);
	std::cout << "Valor de a: " << a << std::endl;
	system("pause");
	pEntero = vec;
	cargarFuncion(vec, 10);
	mostrarFuncion(vec, 10);

	std::cout << std::endl;
	system("pause");
	return 0;
}