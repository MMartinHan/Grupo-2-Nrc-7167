/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 7
    Autor: Martin Han
    Fecha de creacion: 4/11/2021
    Fecha de modificacion: 4/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>

using namespace std;

template <typename T>
    class Cuadrado
    {
        private:
            T lado;
        public:
            Cuadrado();
            Cuadrado(T lado);
            T getLado();
            void setLado(T);
            T area();
            T perimetro();
    };



#endif