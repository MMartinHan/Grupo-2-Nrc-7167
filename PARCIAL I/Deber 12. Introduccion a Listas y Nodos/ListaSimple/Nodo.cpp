#include "Nodo.h"
#include "Lista.h"

template<typename T>
T Nodo<T>::getValor() {
	return this->data;
}
template<typename T>
void Nodo<T>::setValor(T data) {
	this->data = data;
}
