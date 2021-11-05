/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 3
    Autor: Martin Han
    Fecha de creacion: 31/10/2021
    Fecha de modificacion: 31/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Calculo.h"

using namespace std;

template <typename T>
Calculo<T>::Calculo(T num){
    this->num = num;
}

template <typename T>
void Calculo<T>::setnum(T d){
    this->num = d;
}

template <typename T>
T Calculo<T>::getnum()const{
    return this -> num;
}
