/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	Autor: Sarmiento Alejandro
	Fecha de creación: 31 de octubre del 2021
	Fecha de modificación: 31 de octubre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos
*/


#include <iostream>
#include "Componentes.h"
#include "Componentes.cpp"


using namespace std;

int main(){
    Componentes<int> c1("Intel Core i7", 16);
    Componentes<string> c2("Ryzen 5", "16GB");

    cout<< "--Componentes 1--"<<endl;
    c1.mostrarComponentes();
    cout<< "--Componentes 2--"<<endl;
    c2.mostrarComponentes();

    return 0;
}