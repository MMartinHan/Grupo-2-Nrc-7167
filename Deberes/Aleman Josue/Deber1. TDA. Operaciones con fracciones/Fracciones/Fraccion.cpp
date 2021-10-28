#include <iostream>
#include "Fraccion.h"
#include "Calculo.h"


using namespace std;

Fraccion::Fraccion() {

}

Fraccion::Fraccion(float num, float den) {

	this->num = num;
	this->den = den;

}

void Fraccion::imprimir() {

	cout << "Numerador: " << getNum() << endl;
	cout << "Denominador: " << getDen() << endl;
	cout << "Resultado: " << num / den;
}

void Fraccion::pedirDatos() {


	cout << "Ingrese el valor del numerador: ";
	cin >> num;

	cout << "Ingrese el valor del denominador: ";
	cin >> den;

}

//metodo abstracto
void Fraccion::calcular() {
	
	Fraccion* fracciones = new Fraccion[2]; //En este problema, necesitamos DOS fracciones, declaramos arreglo de tipo dinamico del objeto

	for (int i = 0; i < 2; i++) {
		(fracciones + i)->pedirDatos();
		cout << endl;
	}

	float n1, n2, d1, d2; //Declaramos variables genericas para realizar las operaciones aritmeticas correspondientes

	n1 = (fracciones + 0)->getNum();
	n2 = (fracciones + 1)->getNum();

	d1 = (fracciones + 0)->getDen();
	d2 = (fracciones + 1)->getDen();

	num = ((n1 * d2) + (n2 * d1));
	den = ((d1 + d2));

	
}


void Fraccion::setNum(float num) {
	this->num = num;
}

float Fraccion::getNum() {
	return num;
}

void Fraccion::setDen(float den) {
	this->den = den;
}

float Fraccion::getDen() {
	return den;
}

