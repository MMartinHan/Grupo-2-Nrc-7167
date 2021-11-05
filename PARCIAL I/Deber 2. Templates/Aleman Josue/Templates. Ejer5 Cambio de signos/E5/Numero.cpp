#include <iostream>
#include "Numero.h"

using namespace std;

template<typename T>
Numero<T>::Numero(int _dimension) {

	this->arr = (T*)calloc(_dimension, sizeof(int*));
	this->dimension = _dimension;
}

template<typename T>
void Numero<T>::imprimirVector() {
	for (int i = 0; i < dimension; i++) {
		cout << "\t" << arr[i];
	}
}
template<typename T>
void Numero<T>::cambiarSignos() {

	for (int i = 0; i < dimension; i++) {
		arr[i] *= (-1);
	}
	
	imprimirVector();
}

template<typename T>
void Numero<T>::insertarElementos() {

	for (int i = 0; i < dimension; i++) {
		cout << "Insertar el " << i + 1 << " elemento del vector" << endl;
		cin >> arr[i];
	}

	cambiarSignos();
}