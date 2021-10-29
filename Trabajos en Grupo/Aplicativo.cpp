/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	
	autores: Sarmiento Alejandro
			 Han Martin
			 Bolaños Sebastián
			 Josúe Alemán
	
	fecha de creación: 27 de octubre del 2021
	fecha de modificación: 27 de octubre del 2021
	NRC: 7167
	Nombre de la materia: Estructura de Datos 
*/


#include <iostream>
#include "Operacion.h"

using namespace std;

int main(int argc, char** argv) {
	
	Operacion* op = new Operacion();
	
	op->calculo(5,8,7,3);
	cout<< "Numerador: "<<op->getNumerador()<<endl;
	cout<< "Denominador: "<<op->getDenominador()<<endl;
	cout<< "\nEl resultado es: "<<op->calculo(5,8,7,3);
	return 0;
}

