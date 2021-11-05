#include <iostream>
#include "Automovil.h"

using namespace std;

template <typename T, typename U>
Automovil<T,U>::Automovil(T marca, T modelo, U precio, U kilometraje){
    this->marca = marca;
    this->modelo = modelo;
    this->precio = precio;
    this->kilometraje = kilometraje;
}
template <typename T, typename U>
void Automovil<T,U>::imprimir(){
    cout << "\nMarca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Precio: " << precio << endl;
    cout << "Kilometraje: " << kilometraje << endl;
}
template <typename T, typename U>
void Automovil<T,U>::setMarca(T marca){
    this->marca = marca;
}
template <typename T, typename U>
void Automovil<T,U>::setModelo(T modelo){
    this->modelo = modelo;
}
template <typename T, typename U>
void Automovil<T,U>::setPrecio(U precio){
    this->precio = precio;
}
template <typename T, typename U>
void Automovil<T,U>::setKilometraje(U kilometraje){
    this->kilometraje = kilometraje;
}
template <typename T, typename U>
T Automovil<T,U>::getMarca(){
    return marca;
}
template <typename T, typename U>
T Automovil<T,U>::getModelo(){
    return modelo;
}
template <typename T, typename U>
U Automovil<T,U>::getPrecio(){
    return precio;
}
template <typename T, typename U>
U Automovil<T,U>::getKilometraje(){
    return kilometraje;
}

