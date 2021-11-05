#include "calculo.h"
template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if (numero<0){
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}

