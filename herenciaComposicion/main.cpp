#pragma warning
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void cargarCadena(char* palabra, int tamanio) {
	int i;
	fflush(stdin);
	for (i = 0; i < tamanio; i++) {
		palabra[i] = cin.get();
		if (palabra[i] == '\n') break;
	}
	palabra[i] = '\0';
	fflush(stdin);
}

class Fecha {
	int _dia, _mes, _anio;
public:
	void setDia(int dia) { _dia = dia; }
	void setMes(int mes) { _mes = mes; }
	void setAnio(int anio) { _anio = anio; }

	int getDia() { return _dia; }
	int getMes() { return _mes; }
	int getAnio() { return _anio; }

	void cargar() {
		cout << "entrando a cargar de clase fecha" << endl;
		cout << "Dia: ";
		cin >> _dia;
		cout << "Mes: ";
		cin >> _mes;
		cout << "Anio: ";
		cin >> _anio;
	}

	void mostrar() {
		cout << _dia << "/" << _mes << "/" << _anio;
	}
};

// CLASE BASE.
class Persona {
protected:
	int _dni, _telefono;
	char _nombre[30], _apellido[30], _email[30], _direccion[30];
	Fecha _fechaNacimiento;
	bool estado;
public:
	void setDni(int dni) { _dni = dni; }
	void setTelefono(int telefono) { _telefono = telefono; }
	void setNombre(const char* nombre) { strcpy(_nombre, nombre); }
	void setApellido(const char* apellido) { strcpy(_apellido, apellido); }
	void setEmail(const char* email) { strcpy(_email, email); }
	void setDireccion(const char* direccion) { strcpy(_direccion, direccion); }
	void setFechaNacimiento(Fecha fechaNac) { _fechaNacimiento = fechaNac; }

	int getDni() { return _dni; }
	int getTelefono() { return _telefono; }
	const char* getNombre() { return _nombre; }
	const char* getApellido() { return _apellido; }
	const char* getEmail() { return _email; }
	const char* getDireccion() { return _direccion; }
	Fecha getFechaNacimiento() { return _fechaNacimiento; }

	void cargar();
	void mostrar();

};
// FIN CLASE BASE.
void Persona::cargar() {
	cout << "entrando a cargar de clase persona" << endl;
	cout << "Dni: ";
	cin.ignore();
	cin >> _dni; 
	cout << "Telefono: ";
	cin >> _telefono;
	cin.ignore();
	cout << "Nombre: ";
	cargarCadena(_nombre, 29);
	cout << "Apellido: "; 
	cin.ignore();
	cargarCadena(_apellido, 29);
	cout << "Email: ";
	cin >> _email;
	cout << "Direccion: ";
	cin.ignore();
	cargarCadena(_direccion, 29);
	cout << "Fecha de nacimiento: " << endl;
	_fechaNacimiento.cargar();
}

void Persona::mostrar() {
	cout << "entrando a mostrar de clase persona" << endl;
	cout << "Dni: " << _dni << endl;
	cout << "Telefono: " << _telefono << endl;
	cout << "Nombre: " << _nombre << endl;
	cout << "Apellido: " << _apellido << endl;
	cout << "Email: " << _email << endl;
	cout << "Direccion: " << _direccion << endl;
	cout << "Fecha de nacimiento: ";
	_fechaNacimiento.mostrar();
	cout << endl;
}

class Alumno: public Persona {
private:
	int _legajoAlumno, _codigoCarrera;
	char _tituloSecundario[30];
public:
	void setLegajoAlumno(int legajoA) { _legajoAlumno = legajoA; }
	void setCodigoCarrera(int codigoC) { _codigoCarrera = codigoC; }
	void setTituloSecundario(const char* tituloSec) { strcpy(_tituloSecundario, tituloSec); }

	int getLegajoAlumno() { return _legajoAlumno; }
	int getCodigoCarrera() { return _codigoCarrera; }
	const char* getTituloSecundario() { return _tituloSecundario; }

	void cargar();
	void mostrar();

	void modificarDni(int d) { _dni = d; }
};

void Alumno::cargar() {
	Persona::cargar();
	cout << "Legajo: ";
	cin >> _legajoAlumno;
	cout << "Codigo carrera: ";
	cin >> _codigoCarrera;
	cin.ignore();
	cout << "Titulo Secundario: ";
	cargarCadena(_tituloSecundario, 29);
}

void Alumno::mostrar() {
	Persona::mostrar();
	cout << "Legajo: " << _legajoAlumno << endl;
	cout << "Codigo carrera: " << _codigoCarrera << endl;
	cout << "Titulo Secundario: " << _tituloSecundario << endl;
}

class Docente : public Persona {
private:
	int _legajoDocente;
	char _cargo[30];
	Fecha _fechaIngreso;
public:
	void setLegajoDocente(int legajoD) { _legajoDocente = legajoD; }
	void setCargo(const char* cargo) { strcpy(_cargo, cargo); }
	void setFechaIngreso(Fecha fechaIng) { _fechaIngreso = fechaIng; }

	void cargar();
	void mostrar();
};

void Docente::cargar() {
	cout << "Ingresando a docente cargar." << endl;
	Persona::cargar();
	cout << "Legajo: ";
	cin >> _legajoDocente;
	cin.ignore();
	cout << "Cargo: ";
	cargarCadena(_cargo, 29);
	cout << "Fecha de ingreso: ";
	_fechaIngreso.cargar();
}

void Docente::mostrar() {
	cout << "Ingresando a docente mostrar." << endl;
	Persona::mostrar();
	cout << "Legajo: " << _legajoDocente << endl;
	cout << "Cargo: " << _cargo << endl;
	cout << "Fecha de ingreso: ";
	_fechaIngreso.mostrar();
	cout << endl;
}

int main() {
	Alumno obj;
	//PUNTERO FILE, QUE APUNTA A pALU.
	FILE* pAlu;
	pAlu = fopen("alumnos.dat", "rb");
	if (pAlu == NULL) {
		cout << "Error de archivo." << endl;
	}
	//obj.cargar();
	fread(&obj, sizeof obj, 1, pAlu);
	obj.mostrar();
	fclose(pAlu);
	cout << endl;
	system("pause");
	return 0;
}