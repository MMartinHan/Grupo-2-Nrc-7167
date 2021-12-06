#include "Cola.h"
#include "TiempoCliente.h"


void Cola::mostrar() const{

	Nodo<TiempoCliente>* p;
	p = primero;
	
	for (int i = 0; i < size; i++) {
		p->dato.mostrarTiempos();
		p = p->siguiente;
	}

}

void Cola::calcularPromedio(int n) {

	float espera, noTrabaja, servicio;
	int clientesEnCola = 0;

	Nodo<TiempoCliente>* p;
	p = primero;
	espera = p->dato.getEspera();
	noTrabaja = p->dato.getCajeroNoTrabaja();
	servicio = p->dato.getServicio();

	for (int i = 0; i < size; i++) {
		if (p->dato.getEspera() > 0)
			clientesEnCola++;
		espera += p->dato.getEspera();
		noTrabaja += p->dato.getCajeroNoTrabaja();
		servicio += p->dato.getServicio();
		p = p->siguiente;
	}
	
	espera = espera / n;
	noTrabaja = noTrabaja / n;
	servicio = servicio / n;

	mostrarPromedio(espera, noTrabaja, clientesEnCola, servicio);

}

void Cola::mostrarPromedio(float espera, float noTrabaja, float clientesEnCola, float servicio)
{
	cout << "________________________________________________________" << endl;
	cout << "Promedio de tiempo de espera: " << espera << " minutos" << endl;
	cout << "Promedio de tiempo que el cajero no trabaja: " << noTrabaja << " minutos" << endl;
	cout << "Numero de clientes que esperaron en cola: " << clientesEnCola << endl;
	cout << "Promedio de tiempo de servicio: " << servicio << " minutos" << endl;
	cout << "________________________________________________________";
}
