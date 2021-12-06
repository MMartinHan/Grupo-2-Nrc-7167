#include "Calculo.h"
#include <iomanip>


int Calculo::random(int minimo, int maximo) {

	return rand() % ((maximo + 1) - minimo) + minimo;
}


int Calculo::max(int a, int b)
{

	if (a > b)
		return a;
	if (b > a)
		return b;

}