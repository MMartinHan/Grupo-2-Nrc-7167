
/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autores: Aleman Josue
			 Sarmiento Alejandro
			 Han Martin
			 Bolaños Sebastian
	Fecha de creación: 27 de octubre del 2021
	Fecha de modificación: 4 de noviembre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include <stdlib.h>
#include "Fraccion.cpp"


using namespace std;


int main(int argc, char** argv) {

	cout << "Bienvenidos al calculador de fracciones!" << endl;
	system("PAUSE");

	int opc = 1;
	do {
		Fraccion<int> datos;
		datos.elegirTipoDeDato();
		system("PAUSE"); system("cls");
		cout << "Deseas intentarlo con otro arreglo?" << endl << "1. Si" << endl << "2. No" << endl; cin >> opc;

	} while (opc == 1);
	return 0;
}