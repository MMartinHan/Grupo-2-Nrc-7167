#include <iostream>
#include "Operacion.h"

using namespace std;

template<typename T>
Operacion<T>::Operacion(T num1, T num2){
    this->num1 = num1;
    this->num2 = num2;
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

