/*
	UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
	
	autores: Sarmiento Alejandro
			 Han Martin
			 Bolaños Sebastian
	
	fecha de creación: 27 de octubre del 2021
	fecha de modificación: 
	NRC: 7167
	Nombre de la materia: Estructura de Datos 
*/


class Operacion{
	
	private:
		float numerador, denominador;
	
	public:
		Operacion();
		Operacion(float numerador, float denominador);
		float getNumerador();
		void setNumerador(float numerador);
		float getDenominador();
		void setDenominador(float denominador);
		float calculo(float n1, float d1, float n2, float d2);
		
	
};
