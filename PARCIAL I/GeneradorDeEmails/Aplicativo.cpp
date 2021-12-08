#include <iostream>
#include <cstdlib>
#include "ListaEmails.h"
#include "Utils.h"

using namespace std;

void generarEmail(ListaEmails&);

int main(int argv, char** argc) {


	cout << "GENERADOR DE EMAILS" << endl;
	system("PAUSE");

	ListaEmails emails;

	int opc;
	bool continuar = true;

	while (continuar) {
		cout << "Elige: " << endl << endl;
		cout << "1. Generar nuevo email" << endl;
		cout << "2. Mostrar emails generados" << endl;
		cout << "3. Salir" << endl; cin >> opc;

		if (opc == 1) generarEmail(emails);
		if (opc == 2) emails.mostrar();
		if (opc == 3) exit(0);

		cout << "Repetir? SI(1), NO(2)" << endl; cin >> opc;
		if (opc == 2)
			continuar = false;
	}

	return 0;
}

void generarEmail(ListaEmails& emails) {
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	string nombre;
	string apellido;

	cout << "Nombres: ";
	getline(cin, nombre);

	cout << "Apellido: " << endl; cin >> apellido;
	string email = Utils::Generador::generarEmail(nombre, apellido);
	email = emails.validarEmail(email);
	cout << "EMAIL GENERADO:  " << email << endl;
	emails.push(email);

}
