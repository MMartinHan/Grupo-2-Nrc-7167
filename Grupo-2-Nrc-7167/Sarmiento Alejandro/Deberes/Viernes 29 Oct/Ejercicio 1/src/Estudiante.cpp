#include <iostream>
#include "Estudiante.h"

using namespace std;

template <typename T>
Estudiante<T>::Estudiante(string nombre, T nota){
    this->nombre = nombre;
    this->nota = nota;
}
template <typename T>
void Estudiante<T>::mostrar(){
    cout << "\nNombre: " << this->nombre << endl;
    cout << "Nota: " << this->nota << endl;
}
