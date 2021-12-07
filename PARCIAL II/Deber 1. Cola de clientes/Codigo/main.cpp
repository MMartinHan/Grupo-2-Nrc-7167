#include <iostream>
#include <cstdlib>
#include "Cola.h"
#include "TiempoCliente.h"
#include <ctime>



using namespace std;

void mostrarFormato();

int main(int argv, char** argc) {

	cout << "			TIEMPOS DE LOS CLIENTES" << endl << endl;
	
	int n;
	cout << "Ingrese el numero de clientes: "; cin >> n;
	cout << endl;

	mostrarFormato();
	srand(time(0));
	TiempoCliente cliente;
	Cola clientes;
	Cola promedio;


	clientes.push(cliente);
	clientes.mostrar();
	clientes.pop();

	promedio.push(cliente);

	for (int i = 0; i < n-1; i++) {
		cliente.calcularTiempos(cliente);
		clientes.push(cliente);
		clientes.mostrar();
		clientes.pop();
		promedio.push(cliente);
	}
	cout << endl;
	promedio.calcularPromedio(n);

	return 0;
}

void mostrarFormato() {

	cout << "Cliente\t" << "	Tiempo de llegada\t" << "Tiempo de espera\t" << "Tiempo que Cajero no Trabaja\t" << "Tiempo de servicio\t" << "Tiempo de salida\t" << "Tiempo entre llegadas" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
}