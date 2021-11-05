#pragma once
#include <iostream>
#include <stdlib.h>
#include "Posicion.h"

using namespace std;

Posicion::Posicion(int a, int b) {
	this->x = a;
	this->y = b;
}
void::Posicion::sumar() {

	cout << "SUMAS:" << endl;
	cout << "\n";

	Posicion punto1(5, 10);
	Posicion punto2(4, 20);

	Posicion punto3 = punto1 + punto2;

	cout << punto3.x << "\t" << punto3.y << endl;
}

void::Posicion::restar() {

	cout << "SUSTRACCIONES:" << endl;
	cout << "\n";

	Posicion punto1(5, 10);
	Posicion punto2(4, 20);

	Posicion punto3 = punto1 - punto2;

	cout << punto3.x << "\t" << punto3.y << endl;
}

void::Posicion::igualar() {

	cout << "IGUALACIONES:" << endl;
	cout << "\n";

	Posicion punto1(5, 10);
	Posicion punto2(4, 20);

	if (punto1 == punto2) {
		cout << "SON LAS MISMAS COORDENADAS!" << endl;
	}
	cout << "COORDENADAS DISTINTAS!" << endl;
}