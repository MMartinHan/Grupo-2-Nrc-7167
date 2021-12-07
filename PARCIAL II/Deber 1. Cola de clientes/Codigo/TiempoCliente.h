#pragma once


class TiempoCliente {

	private:
		int nCliente;
		int llegada;
		int espera;
		int cajeroNoTrabaja;
		int servicio;
		int salida;
		int entreLlegadas;
	public:
		TiempoCliente();
		void establecerDatos(int, int, int, int, int, int, int);
		void calcularTiempos(TiempoCliente&);
		void mostrarTiempos();

		//Getters

		int getN();
		int getLlegada();
		int getEspera();
		int getCajeroNoTrabaja();
		int getServicio();
		int getSalida();
		int getEntreLlegadas();
};