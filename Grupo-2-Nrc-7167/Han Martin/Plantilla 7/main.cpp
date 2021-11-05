/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 7
    Autor: Martin Han
    Fecha de creacion: 4/11/2021
    Fecha de modificacion: 4/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include <cmath>
#include <math.h>
#include "Cuadrado.cpp"

using namespace std;

int main(){
    Cuadrado<int> cuadrado(5);
    cuadrado.setLado(4);
    cout << "El area del cuadrado es: " << cuadrado.area() << endl;
    cout << "El perimetro del cuadrado es: " << cuadrado.perimetro() << endl;
    return 0;
}