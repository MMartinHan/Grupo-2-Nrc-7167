#include <iostream>
#include "Plantilla.cpp"



int main(int argc, char** argv) {
	Numero<int> entero;
	Numero<float> flotante;
	Numero<double> real;
	entero.setNum(5);
	flotante.setNum(5.6f);
	real.setNum(3.141592);
	std::cout<<"\n Numero de tipo entero "<<entero.getNum();
	std::cout<<"\n Numero de tipo float "<<flotante.getNum();
	std::cout<<"\n Numero de tipo double "<<real.getNum() <<std::endl;
	return 0;
}
