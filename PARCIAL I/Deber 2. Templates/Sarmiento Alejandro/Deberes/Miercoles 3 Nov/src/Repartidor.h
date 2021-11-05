#ifndef REPARTIDOR_H
#define REPARTIDOR_H

#include <iostream>
using namespace std;

template <typename T>
class Repartidor{
    private:
        string vehiculo;
        string nombre;
        T calificacionVenta;
    public:
        Repartidor(string vehiculo, string nombre, T calificacionVenta);
        string getVehiculo();
        string getNombre();
        T getCalificacionVenta();
        void setVehiculo(string);
        void setNombre(string);
        void setCalificacionVenta(T);
        void mostrar();
};


#endif
