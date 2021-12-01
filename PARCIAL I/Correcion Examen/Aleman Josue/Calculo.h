#pragma once

class Calculo {

	private:
		float subtotal = 0;
		float iva = 0;
		float total = 0;
		float descuento = 0;;
	public:
		Calculo() = default;
		Calculo(float subtotal, float iva, float total, float descuento);
		void mostrarTotal();
		
};