/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	
	autores: Sarmiento Alejandro
			 Han Martin
			 Bolaños Sebastian
	
	fecha de creación: 27 de octubre del 2021
	fecha de modificación: 
	NRC: 7167
	Nombre de la materia: Estructura de Datos 
*/

#include <iostream>
#include "Operacion.h"

using namespace std;

Operacion::Operacion(){
	
}
Operacion::Operacion(float numerador, float denominador){
	this->numerador = numerador;
	this->denominador = denominador;
}

float Operacion::getDenominador(){
	return denominador;
}
float Operacion::getNumerador(){
	return numerador;
}
void Operacion::setNumerador(float numerador){
	this->numerador = numerador;
}
void Operacion::setDenominador(float denominador){
	this->denominador = denominador;
}

float Operacion::calculo(float n1, float d1, float n2, float d2){
	
	numerador = (n1*d2)+(n2*d1);
	denominador = (d1+d2);
	
	return numerador/denominador;
}

