#include <iostream>
#include "Cuadrado.h"

using namespace std;

template <typename T>
Cuadrado<T>::Cuadrado(T lado)
{
    this->lado = lado;
}
template <typename T>
T Cuadrado<T>::getLado()
{
    return this->lado;
}
template <typename T>
void Cuadrado<T>::setLado(T lado)
{
    this->lado = lado;
}
template <typename T>
T Cuadrado<T>::area(){
    return this->lado * this->lado;
}


template <typename T>
T Cuadrado<T>::perimetro(){
    return this->lado * 4;
}