#include "Lista.h"
#include "Nodo.h"
#include "Nodo.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
Lista<T>::Lista() {

	this->primero = NULL;
	this->ultimo = NULL;
}

template<typename T>
bool Lista<T>::estaVacia() {
	return (this->primero == NULL);
}
	
template<typename T>
void Lista<T>::agregarPorCabeza(T data) {
	nuevoNodo = new Nodo<T>(data);
	nuevoNodo->vinculo = NULL;
	if (estaVacia()) {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	else {
		ultimo -> vinculo = nuevoNodo;
		ultimo = nuevoNodo;
	}
}

template<typename T>
void Lista<T>::agregarPorCola(T data) {
	nuevoNodo = new Nodo<T>(data);
	nuevoNodo->vinculo = primero;
	primero = nuevoNodo;
}

template<typename T>
void Lista<T>::mostrar() {
	Nodo<T>* tmp;
	tmp = primero;
	while (tmp) {
		cout << tmp->getData() << "  ";
		tmp = tmp->vinculo;
	}
	cout << "NULL" << endl;
}

template<typename T>
void Lista<T>::eliminar(const T datoABorrar) {
	Nodo<T>	*tmp; //apuntador que usaremos para recorrer la lista
	Nodo<T>* tmpAnterior; //apuntador del nodo anterior (para ajustar la lista)
	bool encontrado;
	if (primero == NULL)
		cout << "La lista esta vacia!" << endl;
	else {
		if (primero->data == datoABorrar) {
			tmp = primero;
			primero = primero->vinculo;
			if (primero == NULL) 	//Lista tenia solo un nodo
				ultimo = NULL;
			delete tmp;
		}
		else {
			encontrado = false;
			tmpAnterior = primero; //Apunta al primero
			tmp = primero->vinculo; //Apunta al segundo nodo de la lista
			while (tmp && !encontrado) {
				if (tmp->data == datoABorrar)
					encontrado = true;
				else {
					tmpAnterior = tmp;
					tmp = tmp->vinculo;
				}
			}

			if (encontrado) {
				tmpAnterior->vinculo = tmp->vinculo;
				if (ultimo == tmp) 
					ultimo = tmpAnterior;
				delete tmp;
			}
			else {
				cout << "No se encontro el dato en la lista" << endl;
			}
		}
	}
}
template<typename T>
bool Lista<T>::buscar(const T data) const {
	Nodo<T>* tmp;
	tmp = primero;
	bool encontrado = false;
	while (tmp) {
		if (tmp->getData() == data)
			encontrado = true;
	}

	return encontrado;
}

template<typename T>
T Lista<T>::sumarLista() {
	Nodo<T>* tmp;
	tmp = primero;
	T suma = 0;
	while (tmp) {
		suma = suma + tmp->data;
		tmp = tmp->vinculo;
	}

	return suma;
}