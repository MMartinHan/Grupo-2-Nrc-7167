/*
	Universidad de las Fuerzas Armadas ESPE
	Nombre del programa: Ordenamiento de Arreglos
	Autor: Josue Aleman
	Fecha de creacion: 31/10/2021
	Fecha de modificacion: 2/11/2021
	Nrc: 7167
	Materia: Estructura de Datos
*/
#include <iostream>
#include <stdlib.h>
#include "Arreglo.cpp"

using namespace std;

template<typename T> 
void elegirTipoDeDato(int dim) {
	int opc;
	cout << "Elegir el tipo de dato con el que desea trabajar: " << endl;
	cout << "1. int" << endl << "2. float" << endl << "3. double" << endl;
	cin >> opc;
	if (opc == 1) {
		Arreglo<int> entero(dim);
		int* arr = entero.insertarElementos(dim);
		entero.imprimirArreglo(arr, dim);
		entero.verificarNumero(arr, dim);

	} if (opc == 2) {
		Arreglo<float> flotante(dim);
		float* arr1 = flotante.insertarElementos(dim);
		flotante.imprimirArreglo(arr1, dim);
		flotante.verificarNumero(arr1, dim);
	} if (opc == 3) {
		Arreglo<double> doubles(dim);
		double* arr2 = doubles.insertarElementos(dim);
		doubles.imprimirArreglo(arr2, dim);
		doubles.verificarNumero(arr2, dim);
	}
}

void definirDimension() {

	int dim;
	cout << "Ingresar la dimension de su arreglo: ";
	cin >> dim;

	elegirTipoDeDato<int> (dim);

}
int main(int argv, char** argc) {

	cout << "Bienvenidos al programa que define un arreglo y verifica si existe un numero igual a la suma del resto de vectores!" << endl;
	system("PAUSE");
	system("cls");

	for (int i = 0; i < 4; i++) {
		definirDimension();
	}

	return 0;
}

