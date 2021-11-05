#pragma once

#include <iostream>
#include <stdlib.h>
#include "Posicion.h"

using namespace std;


int main(int argv, char** argc) {

	cout << "\t\t\t\t\tSobre Carga de Operadores\t\t\t\t\t\t\t" << endl;
	system("PAUSE");
	system("cls");
	
	Posicion puntos;
	puntos.sumar();
	puntos.restar();
	puntos.igualar();
	puntos.multiplicar();

	return 0;
}