#include "Matriz.h"
#include "Matriz.cpp"
#include <iostream>

using namespace std;

void iniciarPrograma();

int main(int argv, char* argc) {

	cout << "Matrices con memoria dinamica" << endl;
	system("PAUSE");

	iniciarPrograma();

	return 0;
}

void iniciarPrograma() {
	int dim;
	cout << "Ingrese la dimension de las matrices: "; cin >> dim;

	Matriz<int> matriz1(dim);
	Matriz<int> matriz2(dim);

	matriz1.segmentar();
	matriz1.encerar();
	matriz1.ingresar();
	cout << "\n\n";
	matriz1.imprimir();
	int** m1 = matriz1.getMatriz();

	matriz2.segmentar();
	matriz2.encerar();
	matriz2.ingresar();

	cout << "\n\n";
	matriz2.imprimir();

	int** m2 = matriz2.getMatriz();

	Matriz<int> matrizSuma(dim);
	matrizSuma.segmentar();
	matrizSuma.procesar(m1, m2, dim);
	cout << "\n\n";
	matrizSuma.imprimir();


}