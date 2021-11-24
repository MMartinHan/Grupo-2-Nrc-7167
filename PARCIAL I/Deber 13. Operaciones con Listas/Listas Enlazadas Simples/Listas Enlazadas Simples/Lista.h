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
	void agregarEntre(T, T);
	void eliminar(const T);
	void modificar(T, T);
	bool buscar(const T) const;
	void mostrar();
	T sumarLista();
};