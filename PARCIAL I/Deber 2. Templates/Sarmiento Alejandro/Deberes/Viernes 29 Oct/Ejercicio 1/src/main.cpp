/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autor: Sarmiento Alejandro
	Fecha de creación: 29 de octubre del 2021
	Fecha de modificación: 29 de octubre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos
*/

#include <iostream>
#include "Estudiante.h"
#include "Estudiante.cpp"

using namespace std;

int main(){
    Estudiante<char> es1("Alejandro",'A');
    Estudiante<int> es2("Juan",20);
    Estudiante<float> es3("Pedro",20.5);
    Estudiante<double> es4("Juan",19.987);

    es1.mostrar();
    es2.mostrar();
    es3.mostrar();
    es4.mostrar();


    return 0;
}