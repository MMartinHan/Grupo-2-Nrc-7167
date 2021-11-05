#pragma once

class Posicion {

	private:
		int x, y;
	public:
		Posicion() = default;
		Posicion(int, int);
		void sumar();
		void restar();
		void igualar();

		//SOBRECARGA DEL OPERADOR SUMA:
		Posicion operator + (Posicion punto) {
			Posicion nuevoPunto;
			nuevoPunto.x = x + punto.x;
			nuevoPunto.y = y + punto.y;
			return nuevoPunto;
		}

		//SOBRECARGA DEL OPERADOR RESTA:
		Posicion operator - (Posicion punto) {
			Posicion nuevoPunto;
			nuevoPunto.x = x - punto.x;
			nuevoPunto.y = y - punto.y;
			return nuevoPunto;
		}

		//SOBRECARGA DEL OPERADOR DE IGUALDAD
		bool operator == (Posicion punto) {
			
			if ((x == punto.x) && (y == punto.y)) {
				return true;
			}

			return false;
		}
};