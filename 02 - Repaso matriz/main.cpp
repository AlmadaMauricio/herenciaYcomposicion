#include <iostream>
#include <cstdlib>
#include<cstring>

using namespace std;

/*void cargarMatriz(int mat[5][3], int filas, int columnas);
void mostrarMatriz(int mat[][3], int filas, int columnas);
void mostrarVector(int* v, int tam);*/

/*
LAS AUTORIDADES DE LA CARRERA TUP DE LA UTN ESTÁN REALIZANDO UN ANÁLISIS DE LOS CURSOS VIRTUALES DE LAS DISTINTAS
MATERIAS. POR CADA UNA DE LAS 20 MATERIAS DE LA CARRERA TIENE LA SIGUIENTE INFORMACIÓN

• NÚMERO DE MATERIA (ENTRE 1 Y 20), NOMBRE

ADEMÁS POR CADA INGRESO DE LOS ESTUDIANTES AL AULA VIRTUAL SE REGISTRA LO SIGUIENTE:

• LEGAJO, FECHA DE ACCESO (DÍA Y MES), NÚMERO DE LA MATERIA A LA QUE INGRESO, CANTIDAD DE HORAS (NÚMERO REAL)
 EL FIN DE LOS DATOS SE INDICA CON UN NÚMERO DE LEGAJO IGUAL A 0.

 SE QUIERE RESPONDER LAS SIGUIENTES PREGUNTAS:

a) LAS MATERIAS QUE NO TUVIERON ACCESO DE ALUMNOS NUNCA

b) LA MATERIA QUE MÁS CANTIDAD DE HORAS REGISTRO DE ACCESO DE ALUMNOS

c) POR CADA MATERIA Y DÍA DE MARZO, LA CANTIDAD DE ACCESOS DE ALUMNOS A LAS AULAS VIRTUALES.

• HACER UN PROGRAMA EN EL MARCO DE UN PROYECTO DE CODEBLOCK CON UN MENÚ CON OPCIONES PARA CARGAR LOS DATOS, MOSTRAR CADA PUNTO
 Y SALIR DEL PROGRAMA.
*/

// PROTOTIPO DE FUNCIONES
//void mostrarMatriz(int mat[20][31], int fila, int columna);
//
//void cargarMaterias(char nombres[][30]);
//void cargarCadena(char* palabra, int tam);
//void mostrarMatrizCaracteres(char m[][30], int cant);
// FIN PROTOTIPOS

int funcion(int vec[], int cant);

int main() {

	int vec[] = {}, cant, num;
	cout << "Cantidad de elementos: ";
	cin >> cant;
	cout << endl << "Ingrese elementos del vector: " << endl;
		for (int x = 0; x < cant; x++) {
			cout << "#" << x + 1 << ": ";
			cin >> num;
			vec[x] = num;
		}

		return 0;




	
	

	//int matriz[20][31] = {};
	//char materias[20][30] = {};
	//
	//// A
	//
	//int opcion;
	//
	//while (true){
	//	system("cls");
	//	cout << "---MENU DE OPCIONES---" << endl;
	//	cout << "----------------------" << endl;
	//	cout << "1- INGRESO DE MATERIAS." << endl;
	//	cout << "2- MOSTRAR MATERIAS." << endl;
	//	cout << "3- INGRESO DE ACCESO." << endl;
	//	cout << "4- MATERIAS SIN ACCESO." << endl;
	//	cout << "5- MATERIA CON MAS ALUMNOS." << endl;
	//	cout << "6- ESTADISTICA DE MARZO." << endl;
	//	cout << "0 - FIN." << endl;
	//	cout << "----------------------" << endl;
	//	cout << "INGRESE OPCION: ";
	//	cin >> opcion;
	//	system("cls");
	//	switch (opcion){
	//	case 1:
	//		cargarMaterias(materias);
	//		break;
	//	case 2:
	//		mostrarMatrizCaracteres(materias, 10);
	//		break;
	//	case 3:
	//		break;
	//	case 4:
	//		break;
	//	case 5:
	//		break;
	//	case 6:
	//		break;
	//	case 0:
	//		return 0;
	//		break;
	//	default:
	//		cout << "Opcion incorrecta" << endl;
	//		break;
	//	}
	//	system("pause");
	//}



	/*//EL NOMBRE DE UNA MATRIZ ES UN PUNTERO FILA CONSTANTE A UNA COLUMNA DEFINIDA.
	int mat[5][3]; 
	cargarMatriz(mat, 5, 3);
	mostrarMatriz(mat, 5, 3);*/

	cout << endl;
	system("pause");
	return 0;
}

int funcion(int vec[], int cant) {
	return 1;
}

//DESARROLLO DE FUNCIONES
/*void cargarCadena(char* palabra, int tam) {
	fflush(stdin);
	for (int i = 0; i < tam; i++){
		palabra[i] = cin.get();
		if (palabra[i] == '\n') { 
			break;
		}
		palabra[i] = '\0';
		fflush(stdin);
	}
}

void cargarMaterias(char nombres[][30]) {
	int numeroMateria;
	for (int i = 0; i < 10; i++){
		cout << "NUMERO DE MATERIA: ";
		cin >> numeroMateria;
		cout << "NOMBRE DE MATERIA: ";
		cargarCadena(nombres[numeroMateria - 1], 29);
	}
}


void mostrarMatrizCaracteres(char m[][30], int cant) {
	for (int i = 0; i < cant; i++){
		cout << m[i] << endl;
	}
}

void mostrarMatriz(int mat[20][31], int fila, int columna) {
	for (int i = 0; i < fila; i++){
		for (int j = 0; j < columna; j++){
			cout << mat[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}
// FIN DESARROLLO


/*void cargarMatriz(int(*mat)[3], int filas, int columnas) {
	int cont = 1;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			mat[i][j] = cont;
			cont++;
		}
		std::cout << std::endl;
	}
}
void mostrarMatriz(int(*mat)[3], int filas, int columnas) {
	int cont = 1;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			std::cout << mat[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}*/

