#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Conjunto.h"
#include "Conjunto.cpp"

using namespace std;

void iniciar();
void ingresarElementos(int, int);

int main(int argv, char** argc) {

	cout << "UNION EN INTERSECCION DE CONJUNTOS" << endl << endl;
	system("PAUSE");

	iniciar();
	return 0;
}

void iniciar() {
	int dim1, dim2;

	cout << "Ingresar la dimension del primer conjunto: "; cin >> dim1; cout << "\n";
	cout << "Ingresar la dimension del segundo conjunto: "; cin >> dim2; cout << "\n";
	ingresarElementos(dim1, dim2);

		
}

void ingresarElementos(int _dim1, int _dim2) {


	//INICIALIZANDO CONJUNTOS
	Conjunto<int> conjunto1(_dim1);
	Conjunto<int> conjunto2(_dim2);
	conjunto1.ingresarElementos(_dim1);
	int* A = conjunto1.getElementos();
	conjunto2.ingresarElementos(_dim2);
	int* B = conjunto2.getElementos();

	//IMPRIMIENDO CONJUNTOS (con sobrecarga de operadores)
	conjunto1.imprimir();
	conjunto2.imprimir();

	//UNION E INTERSECCION DE CONJUNTOS
	conjunto1.unir(A, B, _dim1, _dim2);
	conjunto1.intersecar(A, B, _dim1, _dim2);

}