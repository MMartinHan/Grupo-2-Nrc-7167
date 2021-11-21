#include "Lista.h"
#include "Nodo.h"
#include "Nodo.cpp"
#include <iostream>

using namespace std;
template<typename T>
Lista<T>::Lista() {
	this->primero = NULL;
	this->ultimo = NULL;
}

template<typename T>
bool Lista<T>::estaVacia() {
	if (primero == NULL)
		return true;
	else
		return false;
}

template<typename T>
void Lista<T>::insertar(T valor) {

	nuevoNodo = new Nodo<T>;
	nuevoNodo->data = valor;
	if (estaVacia()) {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	else {
		ultimo->vinculo = nuevoNodo;
		ultimo = nuevoNodo;
	}
}
template<typename T>
void Lista<T>::mostrar() {
	Nodo<T>* tmp;
	tmp = primero;
	while (tmp) {
		cout << tmp->data << "--";
		tmp = tmp->vinculo;
	}
	cout << "NULL";
}