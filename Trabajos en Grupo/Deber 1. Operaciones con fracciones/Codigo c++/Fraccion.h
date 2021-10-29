#include <iostream>
#include "Calculo.h"

using namespace std;

class Fraccion : public Calculo {

	private:

		float num, den;

	public:

		Fraccion();
		Fraccion(float, float);
		void setNum(float);
		float getNum();
		void setDen(float);
		float getDen();
		void pedirDatos();
		void calcular(); //metodo abstracto
		void imprimir();
};
