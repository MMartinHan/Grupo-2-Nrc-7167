/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Memoria Dinamica. Punteros
    Autores: 
		- Aleman Josue
		- Bolanios Sebastian
		- Han Martin
		- Sarmiento Bryan
    Fecha de creacion: 10/11/2021
    Fecha de modificacion: 10/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#include <iostream>
#include <stdlib.h>
#include "Proceso.h"
#include "Proceso.cpp"

using namespace std;

int definirDimension() {
	int dim;
	cout << "Ingrese el tamanio: " << endl;
	cin >> dim;

	return dim;
}

int main(int argc, char** argv) {

	cout << "INTRODUCCIÓN A LA MEMORIA DINAMICA. PUNTEROS" << endl;
	system("PAUSE");

	Proceso<int> arreglo(definirDimension());
	arreglo.ingresar();
	arreglo.imprimir();
	arreglo.procesar();
	arreglo.imprimir();

	return 0;
}
