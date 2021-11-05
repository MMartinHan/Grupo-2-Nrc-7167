#include <iostream>
#include "Repartidor.h"

using namespace std;

template <typename T>
Repartidor<T>::Repartidor(string vehiculo, string nombre, T calificacionVenta){
    this->vehiculo = vehiculo;
    this->nombre = nombre;
    this->calificacionVenta = calificacionVenta;
}
template <typename T>
string Repartidor<T>::getVehiculo(){
    return vehiculo;
}
template <typename T>
string Repartidor<T>::getNombre(){
    return nombre;
}
template <typename T>
T Repartidor<T>::getCalificacionVenta(){
    return calificacionVenta;
}
template <typename T>
void Repartidor<T>::setVehiculo(string vehiculo){
    this->vehiculo = vehiculo;
}
template <typename T>
void Repartidor<T>::setNombre(string nombre){
    this->nombre = nombre;
}
template <typename T>
void Repartidor<T>::setCalificacionVenta(T calificacionVenta){
    this->calificacionVenta = calificacionVenta;
}
template <typename T>
void Repartidor<T>::mostrar(){
    cout << "Vehiculo: " << vehiculo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Calificacion de venta: " << calificacionVenta << endl;
}




