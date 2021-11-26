#include "Matriz.h"
#include <iostream>
#include <stdlib.h>


using namespace std;

template<typename T>
Matriz<T>::Matriz(int _dimension) {
	this->dimension = _dimension;
}

template<typename T>
void Matriz<T>::ingresar() {

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cout << "Ingrese el elemento: "; cin >> *(*(matriz+i)+j);
			cout << "\n";
		}
	}
	
}

template <typename T>
void Matriz<T>::segmentar() {

	matriz = (T**)calloc(dimension, sizeof(T*));
	for (int i = 0; i < dimension; i++) {
		*(matriz + i) = (T*)calloc(dimension, sizeof(T));
	}
}

template <typename T>
void Matriz<T>::encerar() {

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			*(*(matriz + i) + j) = 0;
		}
	}

}

template <typename T>
void Matriz<T>::procesar(T** m1, T** m2, int dim) {

	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			for (int k = 0; k < dim; k++) {
				*(*(matriz + i) + j) = *(*(matriz + i) + j) + (*(*(m1 + i) + k)) * (*(*(m2 + k) + j));
			}
		}
	}

}

template<typename T>
void Matriz<T>::imprimir() {
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cout << *(*(matriz + i) + j) << "\t";
		}
		cout << endl;
	}
}


template<typename T>
T** Matriz<T>::getMatriz() {
	return this->matriz;
}