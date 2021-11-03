/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 6
    Autor: Martin Han
    Fecha de creacion: 3/11/2021
    Fecha de modificacion: 3/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>

using namespace std;

template <typename T>
class Triangulo
{
    private:
        T base;
        T altura;
    public:
        Triangulo(T base, T altura);
        T area();
        T perimetro();
};



#endif