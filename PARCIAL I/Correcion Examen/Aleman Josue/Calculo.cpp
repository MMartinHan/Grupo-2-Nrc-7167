#include "Calculo.h"
#include <iostream>
#include <cstdlib>

using namespace std;


Calculo::Calculo(float subtotal, float iva, float total, float descuento) {
	this->subtotal = subtotal;
	this->iva = iva;
	this->total = total;
	this->descuento = descuento;
}
void Calculo::mostrarTotal() {
	cout << endl;
	cout << "SubTotal: " << subtotal << endl;
	cout << "Iva: " << iva << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total: " << total << endl;
	cout << "--------------------------" << endl;

}