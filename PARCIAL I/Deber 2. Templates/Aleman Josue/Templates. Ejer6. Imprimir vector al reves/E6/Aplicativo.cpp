
/*
	Universidad de las Fuerzas Armadas ESPE
	Nombre del programa: Ordenamiento de Arreglos
	Autor: Josue Aleman
	Fecha de creacion: 3/10/2021
	Fecha de modificacion: 3/11/2021
	Nrc: 7167
	Materia: Estructura de Datos
*/

#include <iostream>
#include <stdlib.h>
#include "Arreglo.cpp" //incluyendo .cpp a la cabecera porque si incluyo el .h me da errores de linkeo

using namespace std;

int definirTamaño() {
	int dim;
	cout << "Por favor definir la dimension de su arreglo: ";
	cin >> dim;

	return dim;
}

int main(int argc, char** argv) {

	cout << "PROGRAMA QUE DEFINE UN ARREGLO DE NUMEROS Y CALCULA LA SUMA DE SUS ELEMENTOS" << endl;
	int dim = definirTamaño();
	Arreglo<int> enteros(dim);
	enteros.ingresarElementos(dim);
	int* arr = enteros.getArreglo();
	enteros.imprimirArreglo(arr, dim);
	cout << "Arreglo al revez: " << endl;
	enteros.elementosAlRevez(arr, dim);



	int dim2 = definirTamaño();
	Arreglo<float> flotantes(dim2);
	flotantes.ingresarElementos(dim2);
	float* arr1 = flotantes.getArreglo();
	flotantes.imprimirArreglo(arr1, dim2);
	cout << "Arreglo al revez: " << endl;
	flotantes.elementosAlRevez(arr1, dim2);

	return 0;
}