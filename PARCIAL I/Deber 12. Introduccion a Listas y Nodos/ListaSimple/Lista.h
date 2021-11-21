#pragma once
#include "Nodo.h"

template<typename T>
class Lista {
	private:
		Nodo<T>* primero;
		Nodo<T>* ultimo;
		Nodo<T>* nuevoNodo;
	public:
		Lista();
		bool estaVacia();
		void insertar(T);
		void mostrar();
};