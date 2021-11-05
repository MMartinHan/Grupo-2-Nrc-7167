/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 6
    Autor: Martin Han
    Fecha de creacion: 3/11/2021
    Fecha de modificacion: 3/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include <cmath>
#include <math.h>
#include "Triangulo.h"

using namespace std;

template <typename T>
Triangulo<T>::Triangulo(T base, T altura)
{
    this->base = base;
    this->altura = altura;
}

template <typename T>
T Triangulo<T>::area()
{
    return (base * altura) / 2;
}

template <typename T>
T Triangulo<T>::perimetro()
{
    return base + altura + sqrt(pow(base, 2) + pow(altura, 2));
}


