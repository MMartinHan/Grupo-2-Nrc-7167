#pragma once
#include "Lista.h"

class Menu {
	public:
		Menu() = default;
		void mostrar(Lista<int>);
		Lista<int> elegir(int, Lista<int>);
		void crear();
		void agregar();
		void eliminar();
		void modificar();
};