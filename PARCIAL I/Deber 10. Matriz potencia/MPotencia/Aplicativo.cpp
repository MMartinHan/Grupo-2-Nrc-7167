#include <iostream>
#include <stdlib.h>
#include "Matriz.h"
#include "Matriz.cpp"

using namespace std;

int main(int argv, char** argc) {
		
	cout << "GRUPO 2. POTENCIA DE UNA MATRIZ" << endl;
	system("PAUSE");

	int dimension;
	cout << "Ingrese la dimension: "; cin >> dimension;

	Matriz<int> matrizA(dimension);
	Matriz<int> producto(dimension); 
	

	cout << "Matriz A: " << endl;
	matrizA.ingresarElementos();


	int exponente;
	cout << "Ingrese la cantidad de veces que se va a imprimir su matriz: "; cin >> exponente;
	int i = 0;
	while (i < exponente) {
		producto = matrizA.multiplicar(producto);
		i++;
	}

	producto.imprimir();

	return 0;
}