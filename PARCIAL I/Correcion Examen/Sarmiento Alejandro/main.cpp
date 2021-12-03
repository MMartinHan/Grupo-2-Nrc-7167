#include <iostream>
#include "ListaDoble.h"
#include "ListaDoble.cpp"
#include "NodoDoble.h"
#include "NodoDoble.cpp"

using namespace std;

int main()
{
    ListaDoble ld;
    float dato;
    
    cout<< "Ingrese el subtotal: ";
    cin>> dato;
    
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

    return 0;
}
