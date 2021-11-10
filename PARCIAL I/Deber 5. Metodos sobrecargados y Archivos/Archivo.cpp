/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Metodos Sobrecargados y Archivos
    Autores: 
		- Aleman Josue
		- Bolanios Sebastian
		- Han Martin
		- Sarmiento Bryan
    Fecha de creacion: 9/11/2021
    Fecha de modificacion: 9/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/
#include "Archivo.h"
#include <iostream>
#include <fstream>

using namespace std;

template<typename T>
Archivo<T>::Archivo(string _nombre) {
    this->nombre = (_nombre + ".txt");
}

template<typename T>
void Archivo<T>::escribir() {
    ofstream arch (nombre, ios::app);
    arch << 1 << endl;
    arch << 2 << endl;
    arch << 3 << endl;
    arch << 4 << endl;
}

template<typename T>
T Archivo<T>::leer() {

    ifstream arch(nombre);
    T entrada, sum = 0;;
    while(arch >> entrada) {
        sum += entrada;
    }
    return sum;
}

