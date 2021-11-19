/*
	Universidad de las Fuerzas Armadas ESPE
	Nombre del programa: Recursividad. Hanoi
	Autores:
		- Aleman Josue
		- Bolanios Sebastian
		- Han Martin
		- Sarmiento Bryan
	Fecha de creacion: 18/11/2021
	Fecha de modificacion: 18/11/2021
	Nrc: 7167
	Materia: Estructura de Datos
*/
#include <iostream>
#include "Hanoi.h"
#include "Hanoi.cpp"

using namespace std;

int main(int argc, char** argv) {
	Hanoi<int> num;
	int discos;
	cout << "\nBloques A, B, C\n";
	cout << "\nIngrese el numero de discos ";
	cin >> discos;
	num.hanoi(discos, 'A', 'B', 'C');

	return 0;
}