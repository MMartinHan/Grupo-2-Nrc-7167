#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"

using namespace std;

template<typename T>
Arreglo<T>::Arreglo(int dim) {
	this->arr = (T*)calloc(dim, sizeof(int));
}

template<typename T>
void Arreglo<T>::elementosAlRevez(T* _arr, int dim) {
	cout << "\n";
	for (int i = (dim-1); i >= 0; i--) {
		cout << "\t " << _arr[i];
	}
	cout << "\n";
}
template<typename T>
void Arreglo<T>::ingresarElementos(int dim) {

	for (int i = 0; i < dim; i++) {
		cout << "Ingresar el " << i + 1 << " elemento de su arreglo: ";
		cin >> this->arr[i];
		cout << "\n";
	}
}

template<typename T>
void Arreglo<T>::imprimirArreglo(T* _arr, int _dim) {

	cout << "\n";
	for (int i = 0; i < _dim; i++) {
		cout << "\t " << _arr[i];
	}
	cout << "\n";

}

template<typename T>
T* Arreglo<T>::getArreglo() {
	return this->arr;
}