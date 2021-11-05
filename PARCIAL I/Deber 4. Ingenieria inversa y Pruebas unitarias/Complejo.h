/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Ing. Inversa y unit testing
    Autores: 
		- Aleman Josue
		- Bolanios Sebastian
		- Han Martin
		- Sarmiento Bryan
    Fecha de creacion: 5/11/2021
    Fecha de modificacion: 5/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#pragma once
#include <iostream>
using namespace std;
template <class T>
class Complejo;
template <typename T>
ostream& operator <<(ostream &o, const Complejo<T> &A);

template <class T>
class Complejo{
	public:
		Complejo(T real=0, T img=0);
		void setReal(T real);
		void setImg(T img);
		T getReal();
		T getImg();
		Complejo<T>& operator +(const Complejo<T>  &A);
		Complejo<T>& operator -(const Complejo<T>  &A);
	private:
		T real;
		T img;
};

