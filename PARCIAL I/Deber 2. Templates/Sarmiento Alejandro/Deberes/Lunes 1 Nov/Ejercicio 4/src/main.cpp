/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autor: Sarmiento Alejandro
	Fecha de creación: 01 de noviembre del 2021
	Fecha de modificación: 01 de noviembre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos
*/


#include <iostream>
#include "Automovil.h"
#include "Automovil.cpp"

using namespace std;

int main(){

    Automovil<string, int> auto1("Toyota", "G508", 50000, 0);
    Automovil<string, double> auto2("Nissan", "AG8", 30800.50, 5000);

    auto1.imprimir();
    auto2.imprimir();

    return 0;
}