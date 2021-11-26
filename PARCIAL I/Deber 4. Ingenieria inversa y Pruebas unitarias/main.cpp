/*
    Universidad de las Fuerzas Armadas ESPE
    Nombre del programa: Ing. Inversa y unit testing
    Autores: 
		- Aleman Josue
		- Bolanios Sebastian
		- Han Martin
		- Sarmiento Bryan
    Fecha de creacion: 5/11/2021
    Fecha de modificacion: 5/11/2021
    Nrc: 7167
    Materia: Estructura de Datos
*/

#include <iostream>
#include "Complejo.cpp"
using namespace std;

int main(int argc, char** argv) {
	Complejo<int> A(1,3),B(2,4);
	Complejo<int> C;
	int x,y;
	cout <<" suma de complejos "<<endl;
	C=A+B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	C.setImg(0);
	C.setReal(0);
	cout <<" resta de complejos "<<endl;
	C=A-B;
	cout<<C.getReal()<<"  +  "<<C.getImg()<<"  i "<< endl;
	cin.ignore();
	system("pause");
	return 0;
}
