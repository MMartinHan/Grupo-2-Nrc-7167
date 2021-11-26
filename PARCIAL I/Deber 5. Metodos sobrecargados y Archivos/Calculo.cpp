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
#include "Calculo.h"

using namespace std;

template <typename... T>
auto Calculo::sumar(T... args) {
    auto suma = 0.0;
    for(auto &v:{args...}) {
        //calculo.sumar(10.4,1,3.141516,........)
        suma+=v;
    }

    return suma;
}

