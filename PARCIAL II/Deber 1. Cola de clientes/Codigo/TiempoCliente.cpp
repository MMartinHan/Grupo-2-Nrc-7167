#include "TiempoCliente.h"
#include "Calculo.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

TiempoCliente::TiempoCliente() {

	Calculo calculo;

	this->nCliente = 1;
	this->llegada = calculo.random(1, 25);
	this->espera = 0;
	this->cajeroNoTrabaja = 0;
	this->servicio = calculo.random(1, 16);
	this->salida = llegada + espera + servicio;
	this->entreLlegadas = llegada;

}


void TiempoCliente::establecerDatos(int nCliente, int llegada,
										int espera, int cajeroNoTrabaja,
										int servicio, int salida,
										int entreLlegadas) {
	this->nCliente = nCliente;
	this->llegada = llegada;
	this->espera = espera;
	this->cajeroNoTrabaja = cajeroNoTrabaja;
	this->servicio = servicio;
	this->salida = salida;
	this->entreLlegadas = entreLlegadas;

}

void TiempoCliente::calcularTiempos(TiempoCliente& cliente) 
{
	Calculo calculo;
	int n = cliente.getN();
	int llegadaAnterior = cliente.getLlegada();
	int salidaAnterior = cliente.getSalida();
	int entreLlegadas = cliente.getEntreLlegadas();

	int llegada, espera, cajeroNoTrabaja,
		servicio, salida;

	n++;
	llegada = llegadaAnterior + calculo.random(1, 25);
	espera = (calculo.max(salidaAnterior, llegada)) - llegada;
	servicio = calculo.random(1, 16);
	salida = llegada + espera + servicio;
	cajeroNoTrabaja = (calculo.max(llegada, salidaAnterior)) - salidaAnterior;
	entreLlegadas = llegada;
	entreLlegadas -= llegadaAnterior;

	establecerDatos(n, llegada, espera, cajeroNoTrabaja, servicio, salida, entreLlegadas);


}


void TiempoCliente::mostrarTiempos() {
	cout << nCliente << "\t\t\t" << llegada << "\t\t\t" << espera << "\t\t\t" << cajeroNoTrabaja << "\t\t\t" << servicio << "\t\t\t" << salida << "\t\t\t" << entreLlegadas << endl;
	cout << "_____________________________________________________________________________________________________________________________________________________________" << endl;
}

int TiempoCliente::getN()
{
	return nCliente;
}

int TiempoCliente::getLlegada()
{
	return llegada;
}

int TiempoCliente::getEspera()
{
	return espera;
}

int TiempoCliente::getCajeroNoTrabaja()
{
	return cajeroNoTrabaja;
}

int TiempoCliente::getServicio()
{
	return servicio;
}

int TiempoCliente::getSalida()
{
	return salida;
}

int TiempoCliente::getEntreLlegadas()
{
	return entreLlegadas;
}
