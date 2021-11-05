#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>

using namespace std;

template<typename T>
class Estudiante {
    private:
        string nombre;
        T nota;

    public:
        Estudiante(string nombre, T nota);
        void mostrar();

};
#endif