/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 5
    Autor: Martin Han
    Fecha de creacion: 2/11/2021
    Fecha de modificacion: 2/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Frase.h"

using namespace std;

template <typename T>
Frase<T>::Frase(T caracter){
    this->caracter=caracter;
}

template <typename T>
void Frase<T>::setFrase(T caracter){
    this->caracter=caracter;
}

template <typename T>
T Frase<T>::getFrase()const{
    return this -> caracter;
}