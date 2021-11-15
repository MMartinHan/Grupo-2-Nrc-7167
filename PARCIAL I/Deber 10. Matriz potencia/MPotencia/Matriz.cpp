#include "Matriz.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template<typename T>
Matriz<T>::Matriz(int dimension) {
	this->dimension = dimension;
	matriz = (T**)calloc(dimension, sizeof(T*));
	for (int i = 0; i < dimension; i++) {
		*(matriz + i) = (T*)calloc(dimension, sizeof(T));
	}
}

template<typename T>
void Matriz<T>::ingresarElementos() {
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			cout << "Ingrese el elemento: "; cin >> *(*(matriz + i) + j);
			cout << "\n";
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
Matriz<T> Matriz<T>::multiplicar(Matriz producto) {
	//Matriz<T> resultado(dimension);

	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			for (int k = 0; k < dimension; k++) {
				*(*((producto.matriz)+i)+j) = *(*((producto.matriz) + i) + j) + (*(*((matriz) + i) + k)) * (*(*((matriz) + k) + j));
			}
		}
	}

	return producto;
}

template<typename T>
T Matriz<T>::obtener(int fila, int columna) {
	return *(*(matriz + fila) + columna);
}

template <typename T>
void Matriz<T>::definir(T valor, int fila, int columna) {
	*(*(matriz + fila) + columna) = valor;
}