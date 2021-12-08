#pragma once
#include "Lista.h"


class ListaEmails : public Lista<string> {


	public:
		string validarEmail(string);
};
