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
		void agregarPorCabeza(T);
		void agregarPorCola(T);
		void mostrar();
		bool buscar(const T) const;
		void eliminar(const T);
		T sumarLista();
};