/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 7
    Autor: Martin Han
    Fecha de creacion: 4/11/2021
    Fecha de modificacion: 4/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#include <iostream>
#include <cmath>
#include <math.h>
#include "Cuadrado.h"

using namespace std;

template <typename T>
Cuadrado<T>::Cuadrado()
{
    this->lado = 0;
}

template <typename T>
Cuadrado<T>::Cuadrado(T lado)
{
    this->lado = lado;
}

template <typename T>
T Cuadrado<T>::getLado()
{
    return lado;
}

template <typename T>
void Cuadrado<T>::setLado(T lado)
{
    this->lado = lado;
}

template <typename T>
T Cuadrado<T>::area()
{
    return lado * lado;
}

template <typename T>
T Cuadrado<T>::perimetro()
{
    return lado * 4;
}
