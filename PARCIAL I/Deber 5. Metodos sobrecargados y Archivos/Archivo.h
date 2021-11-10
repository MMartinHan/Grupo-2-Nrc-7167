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