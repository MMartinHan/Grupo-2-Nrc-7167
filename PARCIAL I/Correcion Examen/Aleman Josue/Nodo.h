#pragma once

template <class Type>
class Nodo {

	private:
		Type dato;
		Nodo<Type>* siguiente;
		Nodo<Type>* anterior;
	public:

		Nodo() = default;
		Nodo(Type);

		template <class Type>
		friend class Lista;

		friend class ListaCalculo;

};