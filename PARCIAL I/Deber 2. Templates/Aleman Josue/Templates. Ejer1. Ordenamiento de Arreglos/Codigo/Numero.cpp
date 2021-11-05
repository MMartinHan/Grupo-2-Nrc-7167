#include <iostream>
#include <stdlib.h>
#include "Numero.h"

using namespace std;

template<typename T>
void Numero<T>::iniciarElementos(int dim) {

	for (int i = 0; i < dim; i++) {
		cout << "Ingresar el " << i + 1 << " elemento de su arreglo: ";
		cin >> this->arreglo[i];
		cout << "\n";
	}

}

template<typename T>
Numero<T>::Numero(int dim) {

	this->arreglo = (T*)calloc(dim, sizeof(int)); //Asignando memoria al arreglo dinamico

}

template<typename T>
void Numero<T>::imprimir(T* arr, int dim) {
	cout << "\n";
	for (int i = 0; i < dim; i++) {
		cout << "\t " << arr[i];
	}
	cout << "\n";
}


template<typename T>
void Numero<T>::ordenarArreglo(T* arr, int dim) {

	for (int i = 0; i < dim - 1; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (arr[i] > arr[j]) {
				intercambiar(arr[i], arr[j]);
			}
		}
	}
}

template<typename T>
void Numero<T>::intercambiar(T& v1, T& v2) {
	T aux = v1;
	v1 = v2;
	v2 = aux;
}



template<typename T>
void Numero<T>::setArreglo(T* arr) {

	this->arreglo = arr;
}

template<typename T>
T* Numero<T>::getArreglo() {
	return this->arreglo;
}
