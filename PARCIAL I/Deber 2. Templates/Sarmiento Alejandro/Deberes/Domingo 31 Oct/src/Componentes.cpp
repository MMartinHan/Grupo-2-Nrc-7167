#include <iostream>
#include "Componentes.h"

using namespace std;

template<typename T>
Componentes<T>::Componentes(string cpu, T ram){
    this->cpu = cpu;
    this->ram = ram;
}

template<typename T>
string Componentes<T>::getCpu(){
    return cpu;
}

template<typename T>
T Componentes<T>::getRam(){
    return ram;
}

template<typename T>
void Componentes<T>::mostrarComponentes(){
    cout << "CPU: " << getCpu() << endl;
    cout << "RAM: " << getRam() << endl;
}

