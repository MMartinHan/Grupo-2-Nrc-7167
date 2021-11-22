#include "Nodo.h"
#include <iostream>

template<typename T>
Nodo<T>::Nodo(T data) {
	this->data = data;
}

template<typename T>
T Nodo<T>::getData() {
	return this->data;
}

template <typename T>
void Nodo<T>::setData(T data) {
	this->data = data;
}