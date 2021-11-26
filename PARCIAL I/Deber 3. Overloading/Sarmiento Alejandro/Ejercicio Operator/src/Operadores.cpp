#include "Operadores.h"
#include <iostream>

using namespace std;


Operadores::Operadores(int a)
{
    this->num1 = a;
}

int Operadores::getValor(){
    return num1;
}
Operadores Operadores::operator++(){
    num1++;
    return *this;
}
Operadores Operadores::operator--(){
    num1--;
    return *this;
}
Operadores Operadores::operator++(int n){
    num1 += n++;
    return *this;
}
Operadores Operadores::operator--(int n){
    num1 -= n--;
    return *this;
}