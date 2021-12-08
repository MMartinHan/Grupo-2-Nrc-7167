#pragma once
#include <iostream>

using namespace std;

class Propietario {

	private:
		int id;
		string nombre;
		string apellido;
		int cedula;
		string email;
	public:
		Propietario();
		void establecerDatos(int, string, string, int, string);
		void mostrarPropietarios();

};