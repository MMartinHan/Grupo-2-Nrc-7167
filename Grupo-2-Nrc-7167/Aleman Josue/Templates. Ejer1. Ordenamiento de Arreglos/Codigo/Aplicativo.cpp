
/*
	Universidad de las Fuerzas Armadas ESPE
	Nombre del programa: Ordenamiento de Arreglos
	Autor: Martin Han
	Fecha de creacion: 29/10/2021
	Fecha de modificacion: 29/10/2021
	Nrc: 7167
	Materia: Estructura de Datos
*/
#include <iostream>
#include <stdlib.h>
#include "Numero.cpp" //incluyendo .cpp a la cabecera porque si incluyo el .h me da errores de linkeo


int definirTamaño() {
	int dim;
	cout << "Por favor definir la dimension de su arreglo: ";
	cin >> dim;

	return dim;
}

int main(int argc, char** argv) {


	cout << "Bienvenidos al programa que ordena numeros!" << endl;
	cout << "El sistema utiliza un famoso algoritmo llamado Bubble Sort" << endl;
	system("PAUSE");
	system("cls");
	int dim = definirTamaño();
	
	Numero<int> enteros(dim);
	enteros.iniciarElementos(dim);
	int* arr = enteros.getArreglo();
	enteros.imprimir(arr, dim);
	enteros.ordenarArreglo(arr, dim);
	enteros.imprimir(arr, dim);
	system("PAUSE");
	system("cls");

	int dim1 = definirTamaño();
	Numero<float> flotantes (dim1);
	flotantes.iniciarElementos(dim1);
	float* arr1 = flotantes.getArreglo();
	flotantes.imprimir(arr1, dim1);
	flotantes.ordenarArreglo(arr1, dim1);
	flotantes.imprimir(arr1, dim1);
	system("PAUSE");
	system("cls");

	return 0;
}