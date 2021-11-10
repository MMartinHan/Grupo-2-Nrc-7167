#pragma once
#include <string>
#include <fstream>

using namespace std;

template<typename T>
class Archivo {
    private:
        string nombre;
    public:
        Archivo(string nombre);
        void escribir();
        T leer();
};