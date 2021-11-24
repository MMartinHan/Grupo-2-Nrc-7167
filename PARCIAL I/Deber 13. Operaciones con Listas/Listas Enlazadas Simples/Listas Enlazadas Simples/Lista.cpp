#include "Lista.h"
#include "Nodo.h"
#include "Nodo.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;


/**
 * @brief Constructor que inicializa una lista
 *
 * @return true
 * @return false
 */
template <typename T>
Lista<T>::Lista() {

	this->primero = NULL;
	this->ultimo = NULL;
}

/**
 * @brief Verificacion si una lista esta vacia
 *
 * @return true
 * @return false
 */
template<typename T>
bool Lista<T>::estaVacia() {
	return (this->primero == NULL);
}

/**
 * @brief Lista<T>::agregarEntre
 *        Metodo que agrega elementos a una lista por la mitad
 *
 * @param tipo plantilla, dato que se va a insertar en el nuevo nodo
 * @param tipo plantilla, dato pivote para insertar el nuevo nodo
 */

template <typename T>
void Lista<T>::agregarEntre(T data, T datoABuscar) {
	nuevoNodo = new Nodo<T>(data);
	nuevoNodo->vinculo = NULL;
	if (estaVacia()) {
		cout << "Por favor agregar por cola o por cabeza primero! " << endl;
		return;
	}
	else {
		Nodo<T>* tmp;
		tmp = primero;
		bool encontrado = false;
		while (tmp && !encontrado) {
			if (tmp->data == datoABuscar) {
				encontrado = true;
				nuevoNodo->vinculo = tmp->vinculo;
				tmp->vinculo = nuevoNodo;
				if (nuevoNodo->vinculo == NULL)
					ultimo = nuevoNodo;
			}
			else {
				tmp = tmp->vinculo;
			}
		}
	}
}

/**
 * @brief Lista<T>::agregarPorCabeza
 *        Metodo que agrega elementos a una lista por la cabeza
 *
 * @param tipo plantilla, dato que se va a insertar en el nuevo nodo
 */
template<typename T>
void Lista<T>::agregarPorCabeza(T data) {
	nuevoNodo = new Nodo<T>(data);
	nuevoNodo->vinculo = NULL;
	if (estaVacia()) {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	else {
		ultimo->vinculo = nuevoNodo;
		ultimo = nuevoNodo;
	}
}


/**
 * @brief Lista<T>::agregarPorCola
 *        Metodo que agrega elementos a una lista por la cola
 *
 * @param tipo plantilla, dato que se va a insertar en el nuevo nodo
 */
template<typename T>
void Lista<T>::agregarPorCola(T data) {
	nuevoNodo = new Nodo<T>(data);
	nuevoNodo->vinculo = primero;
	primero = nuevoNodo;
}


/**
 * @brief Lista<T>::agregarEntre
 *		  Metodo que recorre la lista y muestra en pantalla los identificadores de cada nodo
 *
 *
 */
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


/**
 * @brief Lista<T>::eliminar
 *        Metodo que elimina cualquier elemento de la lista
 *
 * @param tipo plantilla, identificador del nodo que se va a borrar
 */

template<typename T>
void Lista<T>::eliminar(const T datoABorrar) {
	Nodo<T>* tmp; //apuntador que usaremos para recorrer la lista
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



/**
 * @brief Lista<T>::modificar
 *        Metodo que modifica cualquier elemento de la lista
 *
 * @param tipo plantilla, dato que va a reemplazar al elemento del nodo
 * @param tipo plantilla, dato del identificador del nodo que va a ser reemplazado
 */
template<typename T>
void Lista<T>::modificar(T data, T datoABuscar) {
	if (estaVacia()) {
		cout << "Por favor agregar por cola o por cabeza primero! " << endl;
		return;
	}
	else {
		Nodo<T>* tmp;
		tmp = primero;
		bool encontrado = false;
		while (tmp && !encontrado) {
			if (tmp->data == datoABuscar) {
				encontrado = true;
				tmp->data = data;
			}
			else {
				tmp = tmp->vinculo;
			}
		}
	}
}


/**
 * @brief Metodo que busca si un elemento se encuentra en la lista
 *
 * @return true
 * @return false
 */

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


/**
 * @brief Lista<T>::sumarLista
 *        Metodo que suma todos los elementos de la lista
 *
 * @return tipo plantilla
 */

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