#include <iostream>
#include "Operacion.h"

using namespace std;

template<typename T>
Operacion<T>::Operacion(T num1, T num2){
    this->num1 = num1;
    this->num2 = num2;
}

template <typename T>
void Operacion<T>::setnum1(T d){
    this->num1 = d;
}

template <typename T>
T Operacion<T>::getnum1()const{
    return this -> num1;
}

template <typename T>
void Operacion<T>::setnum2(T d){
    this->num2 = d;
}

template <typename T>
T Operacion<T>::getnum2()const{
    return this -> num2;
}

template<typename T>
T Operacion<T>::suma(){
    return num1 + num2;
}

template<typename T>
T Operacion<T>::resta(){
    return num1 - num2;
}

template<typename T>
T Operacion<T>::multiplicacion(){
    return num1 * num2;
}

template<typename T>
T Operacion<T>::division(){
    return num1 / num2;
}