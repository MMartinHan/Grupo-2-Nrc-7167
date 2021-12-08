#include "ListaEmails.h"
#include "Utils.h"


using namespace std;


string ListaEmails::validarEmail(string emailOriginal)
{
	string email, emailTemp;
	size_t posicionDominio = 0;

	Nodo<string>* p;
	p = primero;
	int  ultimoDigito = 0;
	while (p) {
		emailTemp = p->getDato();
		posicionDominio = emailTemp.find("@", 0);
		email = emailTemp.substr(0, posicionDominio);

		if (email.length() == emailOriginal.length()) {

			if (email.find(emailOriginal, 0) == 0) {
				string digit = email.substr(email.length() - 1, 1);
				if (Utils::Validacion::esDigito(email.substr(email.length() - 1, 1))) {
					ultimoDigito = stoi(emailOriginal.substr(emailOriginal.length() - 1, 1));
					ultimoDigito = ultimoDigito + 1;
					emailOriginal = emailOriginal.substr(0, emailOriginal.length() - 1) + to_string(ultimoDigito);
				}
				else {
					emailOriginal += "1";
				}
			}
		}
		
		p = p->getSiguiente();
	}

	return emailOriginal += "@espe.edu.ec";
}
