#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"

using namespace std;


template<typename T>
Arreglo<T>::Arreglo(int dim) {

	this->arr = (T*)calloc(dim, sizeof(int*));
}

template<typename T>
T* Arreglo<T>::insertarElementos(int dim) {
	
	for (int i = 0; i < dim; i++) {
		cout << "Ingresa el " << i + 1 << " elemento del arreglo: ";
		cin >> this->arr[i];
		cout << endl;
	}

	return arr;
}

template<typename T>
void Arreglo<T>::verificarNumero(T* arr, int dim) {
	T suma = sumarElementos(arr, dim);
	T numeroEncontrado = 0;
	for (int i = 0; i < dim; i++) {
		if (arr[i] == (suma - arr[i])) {
			numeroEncontrado = arr[i];
		}
	}

	mostrarNumero(numeroEncontrado);
}

template<typename T>
T Arreglo<T>::sumarElementos(T* arr, int dim) {
	T suma = 0;
	for (int i = 0; i < dim; i++) {
		suma += arr[i];
	}

	return suma;
}



template<typename T>
void Arreglo<T>::mostrarNumero(T num) {

	if (num > 0) {
		cout << "SE ENCONTRO UN NUMERO IGUAL A LA SUMA DEL RESTO DE LOS ELEMENTOS DEL VECTOR!" << endl;
		cout << "------" << num << "------";
		system("PAUSE");
		system("cls");
	}
	else {
		cout << "No existen numeros iguales a la suma del resto de los elementos :(" << endl;
		system("PAUSE");
		system("cls");
	}
}

template<typename T>
void Arreglo<T>::imprimirArreglo(T* arr, int dim) {

	for (int i = 0; i < dim; i++) {
		cout << "\t" << arr[i];
		cout << endl;
	}
}
