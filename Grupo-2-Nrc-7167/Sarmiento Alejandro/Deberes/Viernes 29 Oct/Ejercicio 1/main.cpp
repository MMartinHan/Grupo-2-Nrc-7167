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

using namespace std;

int main(){
    Estudiante<int> es1("Alejandro",20);
    Estudiante<double> es2("Bryan",18.98);
    Estudiante<char> es3("Rodolfo", 'A');

    es1.mostrarDatos();
    cout<< endl;
    es2.mostrarDatos();
    cout<< endl;
    es3.mostrarDatos();
    cout<< endl;

    return 0;
}
