#include <iostream>
#include <cstdlib>
#include <cstring>

struct materia{
	int numeroMateria, cantAlumnos, cantDocentes;
	char nombreMateria[30];
};

void mostrarMateria(materia mat);

int main() {
	// materia: tipo de dato.
	// mat: variable.
	materia mat, vMateria[10];
	// asigno valores mediante -> .
	mat.numeroMateria = 1;
	mat.cantAlumnos = 450;
	mat.cantDocentes = 6;
	strcpy(mat.nombreMateria, "LAB1");

	mostrarMateria(mat);


	std::cout << std::endl;
	system("pause");
	return 0;
}

void mostrarMateria(materia mat) {
	std::cout << mat.numeroMateria << std::endl;
	std::cout << mat.cantAlumnos << std::endl;
	std::cout << mat.cantDocentes << std::endl;
	std::cout << mat.nombreMateria << std::endl;
}