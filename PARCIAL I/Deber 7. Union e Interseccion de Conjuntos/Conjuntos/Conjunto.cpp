#include "Conjunto.h"
#include "Ordenamiento.h"
#include "Ordenamiento.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

template<typename T>
Conjunto<T>::Conjunto(int dim) {
	this->dimension = dim;
	this->elementos = (T*)calloc(dim, sizeof(T*));
}
template<typename T>
Conjunto<T>::Conjunto(T* _elementos) {
	this->elementos = _elementos;
}

template<typename T>
int Conjunto<T>::getDimension() {
	return this->dimension;
}

template<typename T>
T* Conjunto<T>::getElementos() {
	return this->elementos;
}


template<typename T>
void Conjunto<T>::ingresarElementos(int) {
	cout << "\n";
	for (int i = 0; i < dimension; i++) {
		cout << "Ingrese el " << i + 1 << " elemento del conjunto: ";
		cin >> elementos[i]; 
	}
}
template<typename T>
void Conjunto<T>::intersecar(T* A, T* B, int dim1, int dim2) {
	T* I = (T*)calloc(dim1, sizeof(T*));

	int k = 0;
	for (int i = 0; i < dim2; i++) {
		for (int j = 0; j < dim1; j++) {
			if (A[i] == B[j]) {
				I[k] = B[j];
				k++;
				break;
			}
		}
	}

	Ordenamiento<int> orden;
	orden.ordenar(I, k);
	cout << "\n\nInterseccion de los conjuntos A y B: "<< endl;
	for (int i = 0; i < k; i++) {
		cout << "\t";
		cout << I[i];
	}

}
template<typename T>
void Conjunto<T>::unir(T* A, T* B, int dim1, int dim2) {
	

	T* U = (T*)calloc(dim1+dim2,sizeof(T*));
	
	for (int i = 0; i < dim1; i++)
		U[i] = A[i];

	int k = dim1;
	for (int i = 0; i < dim2; i++) {

		int cond = 1;

		for (int j = 0; j < dim1; j++) {
			if (A[j] == B[i]) {
				cond = 0;
				break;
			}
		}

		if (cond == 1) {
			U[k] = B[i];
			k++;
		}
	}

	Ordenamiento<int> orden;
	orden.ordenar(U, k);

	cout << "Union de los conjuntos A y B: \n\n" << endl;
	for (int i = 0; i < k; i++) {
		cout << "\t";
		cout << U[i];
	}


}

template<typename T>
void Conjunto<T>::imprimir() {

	for (int i = 0; i < dimension; i++) {
		cout << "\t";
		cout << elementos[i];
	}

	cout << "\n\n";
	
}