#pragma once
#include "Lista.h"
#include "Calculo.h"
#include "Lista.cpp"

class ListaCalculo :public Lista<Calculo> {

public:
		ListaCalculo() = default;
		void mostrarCalculos() const;

};