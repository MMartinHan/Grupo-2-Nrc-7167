#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>

using namespace std;

template <typename T>
class Cuadrado{
    private:
        T lado;
    public:
        Cuadrado(T lado);
        T getLado();
        void setLado(T lado);
        T area();
        T perimetro();

};
#endif