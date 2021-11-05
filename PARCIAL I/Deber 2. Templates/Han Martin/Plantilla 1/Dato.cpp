/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 1
    Autor: Martin Han
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/


#include "Dato.h"

template <typename T>

void Dato<T>::setDato(T d){
    this->dato = d;
}

template <typename T>
T Dato<T>::getDato()const{
    return this -> dato;
}