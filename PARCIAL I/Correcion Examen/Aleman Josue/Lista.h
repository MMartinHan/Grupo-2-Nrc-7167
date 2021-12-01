#pragma once
#include "Nodo.h"

template <class Type>
class Lista {
	protected:
		Nodo<Type>* primero;
		Nodo<Type>* ultimo;
		Nodo<Type>* nuevoNodo;
		int size;
	public:
		Lista();
		bool estaVacia();
		bool buscar(const Type&) const;
		void agregarPorCabeza(const Type&);
		void agregarPorCola(const Type&);
		void agregar(const Type&, const Type&);
		void eliminarPorCabeza();
		void eliminarPorCola();
		void eliminar(const Type&);

		int getSize();

		void mostrar();
};