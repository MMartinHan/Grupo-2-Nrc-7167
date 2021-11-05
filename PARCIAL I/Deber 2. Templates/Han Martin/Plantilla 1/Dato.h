/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 1
    Autor: Martin Han
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/


#include<iostream>

template <typename T>
class Dato
{
private:
    T dato;
public:
    void setDato(T d);
    T getDato()const;
};


