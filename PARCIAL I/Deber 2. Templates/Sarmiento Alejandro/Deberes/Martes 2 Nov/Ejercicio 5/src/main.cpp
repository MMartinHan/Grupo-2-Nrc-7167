/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autor: Sarmiento Alejandro
	Fecha de creación: 02 de noviembre del 2021
	Fecha de modificación: 02 de noviembre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos
*/


#include <iostream>
#include "Cuadrado.h"
#include "Cuadrado.cpp"

using namespace std;

int main(){
    Cuadrado<int> cuadrado1(10);
    Cuadrado<float> cuadrado2(12.5);
    Cuadrado<double> cuadrado3(18.987);

    cout << "\nEl area del cuadrado1 es: " << cuadrado1.area() << endl;
    cout << "El perimetro del cuadrado1  es: "<< cuadrado1.perimetro() << endl;

    cout << "\nEl area del cuadrado2 es: " << cuadrado2.area() << endl;
    cout << "El perimetro del cuadrado2  es: "<< cuadrado2.perimetro() << endl;

    cout << "\nEl area del cuadrado3 es: " << cuadrado3.area() << endl;
    cout << "El perimetro del cuadrado3  es: "<< cuadrado3.perimetro() << endl;

    return 0;
}