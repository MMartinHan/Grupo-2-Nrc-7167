#include <iostream>
#include <stdlib.h>
#include "Dato.cpp"

using namespace std;

void definirDimension();
void elegirTipoDeDato(int dim);

int main(int argv, char** argc) {

	cout << "PROGRAMA QUE DETERMINA EL MAYOR DE UN ARREGLO Y MODIFICA LOS ELEMENTOS QUE SON MENORES QUE EL ELEMENTO MAYOR" << endl;
	system("PAUSE");
	system("cls");

	definirDimension();

	return 0;
}

template<typename T>
void elegirTipoDeDato(int dim) {

	int opc;
	cout << "1. ENTEROS" << endl << "2. FLOTANTES" << endl; 
	cin >> opc; system("cls");

	Dato<T> datos(0, opc);
	datos.trabajarConDatos(dim);

}
void definirDimension() {
	int dim;
	int opc = 1;
	do {

		cout << "Por favor definir la dimension de su arreglo: "; cin >> dim;
		system("cls");
		elegirTipoDeDato<int> (dim);
		system("PAUSE"); system("cls");
		cout << "Deseas intentarlo con otro arreglo?" << endl << "1. Si" << endl << "2. No" << endl; cin >> opc;

	} while (opc == 1);
}