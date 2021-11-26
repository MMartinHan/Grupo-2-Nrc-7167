#ifndef OPERADORES_H
#define OPERADORES_H

#include <iostream>

using namespace std;


class Operadores{
    public:
        Operadores(int a);
        Operadores();
        
        Operadores operator++();
        Operadores operator--();
        Operadores operator++(int);
        Operadores operator--(int);
        int getValor();

    private:
        int num1;
};
#endif