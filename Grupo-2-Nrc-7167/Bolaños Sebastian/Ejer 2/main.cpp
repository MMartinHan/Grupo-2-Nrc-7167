/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Ejercicio 2
    Autor: Sebastian Bolaños 
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Materia: Estructura de Datos
    Nrc: 7167
*/
#include <iostream>
#include "Numero.cpp"
using namespace std; 

int main() {
	Numero <double> dosnum(20.5, 100.2);
	cout<< "El numero mayor es: " << dosnum.Mayor();
	return 0;
}
