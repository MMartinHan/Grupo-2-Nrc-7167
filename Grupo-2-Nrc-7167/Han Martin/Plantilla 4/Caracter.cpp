/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 1
    Autor: Martin Han
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Caracter.h"

using namespace std;

template <typename T>
Caracter<T>::Caracter(T caracter){
    this->caracter=caracter;
}

template <typename T>
void Caracter<T>::setCaracter(T caracter){
    this->caracter=caracter;
}

template <typename T>
T Caracter<T>::getCaracter()const{
    return this -> caracter;
}