#include <iostream>
#include "Numero.cpp"
using namespace std; 

int main() {
	Numero <double> dosnum(20.5, 100.2);
	cout<< "El numero mayor es: " << dosnum.Mayor();
	return 0;
}
