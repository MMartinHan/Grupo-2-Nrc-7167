#include <iostream>
#include <cstdlib>

//DEFINICIONES
template <class Type>
class Nodo {

private:
	Type dato;
	Nodo<Type>* siguiente;
	Nodo<Type>* anterior;
public:

	Nodo() = default;
	Nodo(Type);
	Type getDato();
	Nodo<Type>* getSiguiente();

	template <class Type>
	friend class Lista;

};

//IMPLEMENTACIONES

template <class Type>
Nodo<Type>::Nodo(Type nuevoDato) {
	this->dato = nuevoDato;
}

template <class Type>
Type Nodo<Type>::getDato() {

	return dato;
}

template <class Type>
Nodo<Type>* Nodo<Type>::getSiguiente() {
	return siguiente;
}