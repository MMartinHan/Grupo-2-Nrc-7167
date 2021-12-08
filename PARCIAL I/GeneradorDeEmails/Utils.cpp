#include "Utils.h"
#include <iostream>


using namespace std;

using namespace Utils;

string Utils::Generador::generarEmail(string nombre, string apellido) {
	
	
	string nombre1, apellido1;
	nombre1 = lowerCase(nombre);
	apellido1 = lowerCase(apellido);

	string email;
	email += nombre1.substr(0, 1);
	email += nombre1.substr(nombre1.find(" ", 0) + 1, 1);	
	//email += nombre2.substr(0, 1);
	//email += nombre2.substr(nombre1.find(" ", 0) + 1, 1);

	if (apellido1.find(" ", 0) < apellido1.length()) {
		email += apellido1.substr(0, apellido1.find(" ", 0));
	}
	else {
		email += apellido1;
	}
	return email;
}

string Utils::Generador::lowerCase(string cad) {

	for (int i = 0; i < cad.length(); i++) cad[i] = tolower(cad[i]);
	return cad;
}

bool Utils::Validacion::esDigito(const string& str) {

	for (const char& c : str)
	{
		if (isdigit(c))
		{
			return true;
		}
	}
	return false;
}