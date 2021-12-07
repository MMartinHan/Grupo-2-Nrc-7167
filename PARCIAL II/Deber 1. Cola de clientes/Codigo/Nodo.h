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

	template <class Type>
	friend class Lista;
	friend class Cola;

};

//IMPLEMENTACIONES

template <class Type>
Nodo<Type>::Nodo(Type nuevoDato) {
	this->dato = nuevoDato;
}