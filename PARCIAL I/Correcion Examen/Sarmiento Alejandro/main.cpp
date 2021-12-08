#include <iostream>
#include "ListaDoble.h"
#include "ListaDoble.cpp"
#include "NodoDoble.h"
#include "NodoDoble.cpp"
#include <stdlib.h>
#include <string>
#include <string.h>
#include <sstream>

using namespace std;

bool isFloat(string);

int main()
{
    ListaDoble ld;
    float dato;
    string valor;
    char num[100];
    
    cout<< "Ingrese el subtotal: ";
    cin>> valor;
    
    if(isFloat(valor)){
    	
    	dato = stof(valor);
    	
		ld.agregarNodo(new NodoDoble(dato));
        system("cls");
    
    
        system("color 2");
    
        cout<<"\t\t---------"<<endl;
        cout<< "\t\t|CALCULO|"<<endl;
        cout<<"\t\t---------"<<endl;
    
        cout<<"-----------------------------------------------"<<endl;
        ld.imprimir();
        cout<<"-----------------------------------------------"<<endl;
        system("pause");
	}
	else{
		system("color 4");
		cout<<"\nIngrese un numero valido!!!!"<<endl;
	}

    return 0;
    
    string a;
    
}

bool isFloat( string myString ) {
    std::istringstream iss(myString);
    float f;
    iss >> noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail(); 
}




