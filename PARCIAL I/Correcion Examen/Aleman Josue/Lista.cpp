#include "Lista.h"
#include "Nodo.h"
#include "Nodo.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;

template <class Type>
Lista<Type>::Lista() {
	this->primero = NULL;
	this->ultimo = NULL;
	this->size = 0;
}

template <class Type>
bool Lista<Type>::buscar(const Type& datoBuscado) const {
	Nodo<Type>* p;
	bool encontrado = false;
	p = primero;
	while (!encontrado) {
		if (p->dato == datoBuscado)
			encontrado = true;
		else
			p = p->siguiente;
	}

	return encontrado;
}

template <class Type>
bool Lista<Type>::estaVacia() {
	return(this->primero == NULL);
}

template <class Type>
void Lista<Type>::mostrar() {
	Nodo<Type>* p;
	p = primero;
	for (int i = 0; i < size; i++) {
		cout << p->dato << " ";
		p = p->siguiente;
	}
	cout << endl;
	cout << "Dimension de la lista: " << size << endl;
}

template <class Type>
void Lista<Type>::agregarPorCabeza(const Type& nuevoDato) {
	nuevoNodo = new Nodo<Type>(nuevoDato);
	nuevoNodo->siguiente = NULL;
	if (estaVacia()) {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	else {
		ultimo->siguiente = nuevoNodo;
		nuevoNodo->anterior = ultimo;
		ultimo = nuevoNodo;
		nuevoNodo->siguiente = primero;
	}
	size++;
}

template <class Type>
void Lista<Type>::agregarPorCola(const Type& nuevoDato) {
	nuevoNodo = new Nodo<Type>(nuevoDato);
	nuevoNodo->siguiente = primero;

	if (!estaVacia()) {
		primero->anterior = nuevoNodo;
		primero = nuevoNodo;
	}
	else {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	size++;
}

template <class Type>
void Lista<Type>::agregar(const Type& nuevoDato, const Type& dato) {
	nuevoNodo = new Nodo<Type>(nuevoDato);
	nuevoNodo->siguiente = NULL;

	Nodo<Type>* p;
	Nodo<Type>* q;
	p = primero;
	q = primero->siguiente;
	if (estaVacia()) {
		cout << "Por favor agregar por cabeza o por cola antes: " << endl;
	}
	else {
		bool encontrado = false;
		while (!encontrado) {
			if (p->dato == dato) {
				encontrado = true;
				if (q == primero) {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = primero;
					ultimo = nuevoNodo;
				}
				else {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = q;
					q->anterior = nuevoNodo;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
	}
	size++;
}

template <class Type>
void Lista<Type>::eliminarPorCabeza() {

	Nodo<Type>* p;
	p = ultimo->anterior;
	p->siguiente = primero;
	delete ultimo;
	ultimo = p;

	size--;


}

template <class Type>
void Lista<Type>::eliminarPorCola() {
	Nodo<Type>* p;
	p = primero;
	primero = primero->siguiente;
	delete p;

	size--;
}

template <class Type>
void Lista<Type>::eliminar(const Type& datoBuscado) {

	Nodo<Type>* p;
	Nodo<Type>* q;
	p = primero;
	q = primero->siguiente;
	bool encontrado = false;
	if (primero == NULL) {
		cout << "No se puede borrar una lista vacia" << endl;
	}
	else {
		while (!encontrado) {
			if (q->dato == datoBuscado) {
				encontrado = true;
				if (q->siguiente = primero) {
					p->siguiente = primero;
					ultimo = p;
				}
				else {
					p->siguiente = q->siguiente;
					q->siguiente->anterior = p;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
		delete q;
	}
	size--;
}

template <class Type>
int Lista<Type>::getSize() {
	return this->size;
}