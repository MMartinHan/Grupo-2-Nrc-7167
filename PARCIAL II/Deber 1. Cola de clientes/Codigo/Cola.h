#pragma once
#include "Lista.h"
#include "TiempoCliente.h"


class Cola : public Lista<TiempoCliente> {

	public:
		void mostrar() const;
		void calcularPromedio(int n);
		void mostrarPromedio(float, float, float, float);
};