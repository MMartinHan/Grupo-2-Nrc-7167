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
#include <iostream>
#include <stdlib.h>
#include "Archivo.h"
#include "Archivo.cpp"
#include "Calculo.h"
#include "Calculo.cpp"

using namespace std;

int main() {

    cout << "GRUPO2. metodos sobrecargados con plantillas y archivos" << endl;
    Archivo<double> f("hola");
    Calculo calculo;
    cout << "SUMA: " << calculo.sumar(f.leer()) << endl;
    return 0;
    
}