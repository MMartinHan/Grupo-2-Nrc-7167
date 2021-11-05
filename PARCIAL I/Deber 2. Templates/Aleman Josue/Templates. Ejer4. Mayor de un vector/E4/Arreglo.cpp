#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"

using namespace std;

template<typename T>
Arreglo<T>::Arreglo(int dim) {
	this->dimension = dim;
	this->arr = (T*)calloc(dimension, sizeof(T*));
}

template<typename T>
void Arreglo<T>::compararElementos(T &_mayor) {

	int cont = 0;
	for (int i = 0; i < dimension; i++) {
		
		if (i == (dimension - 1)) {
			if (arr[i] == arr[i - 1])
				cont++;
		}
		else {
			if (arr[i] == arr[i + 1]) {
				cont++;
			}
		}
	}

	if (cont == (dimension)) {
		_mayor = 0;
	}
}

template<typename T>
int Arreglo<T>::insertarElementos(T &_mayor) {
	
	int j = 0;

	for (int i = 0; i < dimension; i++) {
		cout << "Insertar el " << i + 1 << " elemento del arreglo: "; cin >> this->arr[i];

		if (arr[i] > _mayor) {
			_mayor = arr[i];
			j = i;
		}
		cout << "\n";
	}

	compararElementos(_mayor);

	return j;

}

template<typename T>
void Arreglo<T>::imprimirArreglo() {

	for (int i = 0; i < this->dimension; i++) {
		cout << "\t" << this->arr[i];
	}
	cout << "\n";
}

template<typename T>
void Arreglo<T>::mostrarMayor(T _mayor) {
	
	if (_mayor > 0) {
		cout << "Elemento mayor del arreglo: " << _mayor << endl;
	}
	else {
		cout << "Todos los elementos son iguales!" << endl;
	}

}

template<typename T>
void Arreglo<T>::modificarArreglo(int _posicionMayor, T _reemplazo) {

	for (int i = 0; i < this->dimension; i++) {

		if (i != _posicionMayor) {

			this->arr[i] = _reemplazo;
		}

		cout << "\n";
	}

	imprimirArreglo();
}