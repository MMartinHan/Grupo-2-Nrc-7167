/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"

	Autores: Aleman Josue 
			 Sarmiento Alejandro
			 Han Martin
			 Bolaños Sebastian

	Fecha de creación: 27 de octubre del 2021
	Fecha de modificación: 28 de octubre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos

*/


#include <iostream>
#include <stdlib.h>
#include "Fraccion.h"


using namespace std;


int main(int argc, char** argv) {

	cout << "Bienvenidos al calculador de fracciones!" << endl;
	system("PAUSE");

	Fraccion* fraccion = new Fraccion();

	fraccion->calcular();
	fraccion->imprimir();


	return 0;
}