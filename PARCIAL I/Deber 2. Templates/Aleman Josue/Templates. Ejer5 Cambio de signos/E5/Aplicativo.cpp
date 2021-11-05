/*
	Universidad de las Fuerzas Armadas ESPE
	Nombre del programa: Ordenamiento de Arreglos
	Autor: Josue Aleman
	Fecha de creacion: 2/11/2021
	Fecha de modificacion: 2/11/2021
	Nrc: 7167
	Materia: Estructura de Datos
*/

#include <iostream>
#include <stdlib.h>
#include "Numero.cpp"

using namespace std;

void definirTamaño();

int main(int argv, char** argc) {

	cout << "Programa que cambia el signo de los elementos del vector" << endl;
	system("PAUSE");
	system("cls");

	definirTamaño();

	return 0;
}


void definirTamaño() {
	int dim;
	cout << "Ingrese la dimension de su arreglo: "; cin >> dim;
	Numero<float> entero(dim);
	entero.insertarElementos();

}