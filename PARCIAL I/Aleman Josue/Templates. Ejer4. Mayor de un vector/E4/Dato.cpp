#include <iostream>
#include <stdlib.h>
#include "Arreglo.cpp"
#include "Dato.h"

using namespace std;

template<typename T>
Dato<T>::Dato(T _mayor, int dato) {
	
	this->mayor = _mayor;
	this->tipoDeDato = dato;
}

template <typename T>
void Dato<T>::trabajarConDatos(int _dim)
{
    int posicion;
    int opc = this->tipoDeDato;

    if (opc == 1)
    {
        Arreglo<int> enteros(_dim);
        posicion = enteros.insertarElementos(mayor);
        enteros.mostrarMayor(mayor);
        if (mayor > 0)
        {
            enteros.modificarArreglo(posicion, 0);
        }
    }
    else if (opc == 2)
    {
        Arreglo<float> flotantes(_dim);
        float mayor_ = (float)mayor;
        posicion = flotantes.insertarElementos(mayor_);
        flotantes.mostrarMayor(mayor_);
        if (mayor_ > 0)
        {
            flotantes.modificarArreglo(posicion, 0);
        }
        else
        {
            return;
        }
    }
    else
    {
        return;
    }
}