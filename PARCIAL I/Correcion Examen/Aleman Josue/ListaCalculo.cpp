#include "ListaCalculo.h"
#include "Calculo.h"


void ListaCalculo::mostrarCalculos() const {

	Nodo<Calculo>* p;
	p = primero;

	for (int i = 0; i < size; i++) {
		p->dato.mostrarTotal();
		p = p->siguiente;
	}
}
