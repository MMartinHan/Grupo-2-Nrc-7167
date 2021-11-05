#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include <iostream>

using namespace std;

template <typename T, typename U>
class Automovil{
    private:
        T marca;
        T modelo;
        U precio;
        U kilometraje;
    public:
        Automovil(T, T, U, U);
        void setMarca(T);
        void setModelo(T);
        void setPrecio(U);
        void setKilometraje(U);
        T getMarca();
        T getModelo();
        U getPrecio();
        U getKilometraje();
        void imprimir();

};
#endif