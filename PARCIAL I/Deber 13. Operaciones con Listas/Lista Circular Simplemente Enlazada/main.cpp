#include <iostream>
#include "Nodo.h"
#include "ListaSimple.h"
#include "ListaSimple.cpp"

using namespace std;

int main(){
    int num;
    ListaSimple *lista=new ListaSimple();
    int i=5;
    while(i!=-1){
        cout<<"Ingrese un numero para almacenamiento: ";
        cin>>num;
        if(num!=-1){
            lista->insertar(num);

        }
        i--;
    }
    lista->mostrar();
    cout<<"\n";
    lista->eliminar(2);
    lista->mostrar();
    cout<<"\n";
    lista->insertarEn(2,10);
    lista->mostrar();



}