/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Plantilla 6
    Autor: Martin Han
    Fecha de creacion: 3/11/2021
    Fecha de modificacion: 3/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include <cmath>
#include <math.h>
#include "Triangulo.cpp"

using namespace std;

int main()
{
    Triangulo<int> triangulo1(3, 4);
    cout << "El perimetro del triangulo es: " << triangulo1.perimetro() << endl;
    cout << "El area del triangulo es: " << triangulo1.area() << endl;
    return 0;
}