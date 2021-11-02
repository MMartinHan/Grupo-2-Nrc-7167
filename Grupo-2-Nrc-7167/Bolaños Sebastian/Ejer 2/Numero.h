/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Ejercicio 2
    Autor: Sebastian Bolaños 
    Fecha de creacion: 29/10/2021
    Fecha de modificacion: 29/10/2021
    Materia: Estructura de Datos
    Nrc: 7167
*/

#include <iostream>
using namespace std;
template <typename t>
class Numero
{
	public:
		Numero(t _n1, t _n2){n1 =_n1; n2 =_n2;}
		t Mayor();
	private:
		t n1, n2;
};

