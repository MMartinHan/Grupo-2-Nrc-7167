#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    this->inicio = NULL;
}

ListaDoble::~ListaDoble()
{
    //dtor
}

void ListaDoble::imprimir(){
    for(NodoDoble* temp= inicio; temp!=NULL; temp=temp->sig){
        cout<<"\t Subtotal: "<<temp->num << endl;
        float iva = temp->num * 12/100;
        cout<<"\t IVA: "<<iva<<endl;
        float total = temp->num+iva;
        cout<<"\t Total: "<<total<<endl;
        float descuento5 = (total*0.05);
        float descuento10 = (total*0.10);
        float descuento15 = (total*0.15);
        float total_5 = total - descuento5;
        float total_10 = total - descuento10;
        float total_15 = total - descuento15;
        if(total >= 1 && total <= 100){
            cout<< "\t Descuento: "<<descuento5<<endl;
            cout<<"\t Valor Total: "<<total_5<<endl;
        }else if(total > 100 && total <= 1000){
            cout<< "\t Descuento: "<<descuento10<<endl;
            cout<<"\t Valor Total: "<<total_10<<endl;
        }else if(total > 1000){
            cout<< "\t Descuento: "<<descuento15<<endl;
            cout<<"\t Valor Total: "<<total_15<<endl;
        }else{
            cout<< "\tEl usuario no accedio a ningun decuento"<<endl;
        }
    }
}

void ListaDoble::agregarNodo(NodoDoble* n){
    if(inicio==NULL){
        inicio = n;
    }else{
        NodoDoble* temp;
        for(temp=inicio; temp->sig!=NULL;temp=temp->sig);
        temp->sig = n;
        n->ant = temp;
    }    
}

void ListaDoble::borrarUltimo(){
    NodoDoble* temp;
    for(temp=inicio; temp->sig->sig!=NULL;temp=temp->sig);
    delete temp->sig;
    temp->sig = NULL;
}

void ListaDoble::agregarNodo(NodoDoble* nodo, int pos){
    if(inicio==NULL){ //Validar lista vacia
        return;
    }
    if(pos == 0) {//Insertar en la Posicion 0
        inicio->ant = nodo;
        nodo->sig = inicio;
        nodo->ant = NULL;
        inicio = nodo;
    }else {//Si es distinto de 0 avanzar hasta el numero de posicion
        NodoDoble* temp = inicio;
        for(int i=0;i<pos-1;i++){
            temp=temp->sig;
            if(temp==NULL){
                return;
            }
        }
        if(temp->sig!=NULL) {//Insertar nodo en posicion que no sea 0 ni el ultimo
            temp->sig->ant = nodo;
            nodo->sig = temp->sig;
            nodo->ant = temp;
            temp->sig = nodo;
        } else  {//Insertar en la ultima posicion
            temp->sig = nodo;
            nodo->ant= temp;
        }
    }
}

void ListaDoble::borrarEnmedio(int pos){
    if(inicio==NULL || pos < 0){
        return;
    }if(pos==0){
        NodoDoble* temp2 = inicio->sig;
        delete inicio;
        inicio = temp2;
        inicio->ant = NULL;
    }else{
        NodoDoble* temp = inicio;
        for(int i=0;i<pos;i++){
            temp=temp->sig;
            if(temp==NULL){
                return;
            }
        }
            temp->sig->ant = temp->ant;
            temp->ant->sig = temp->sig;
            delete temp;
    }
}
















