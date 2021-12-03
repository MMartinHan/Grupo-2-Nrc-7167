#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(){
    this->subtotal = 0.0;
    this->iva = 0.0;
    this->total = 0.0;
    this->descuento = 0.0;
    this->precio = 0.0;
    this->siguiente = NULL;
    this->anterior = NULL;
}

Nodo::Nodo(float subtotal, float iva, float total, float descuento, float precio, Nodo *siguiente, Nodo *anterior){
    this->subtotal = subtotal;
    this->iva = iva;
    this->total = total;
    this->descuento = descuento;
    this->precio = precio;
    this->siguiente = NULL;
    this->anterior = NULL;
}

void Nodo::setSubtotal(float subtotal){
    this->subtotal = subtotal;
}

void Nodo::setIva(float iva){
    this->iva = iva;
}

void Nodo::setTotal(float total){
    this->total = total;
}

void Nodo::setDescuento(float descuento){
    this->descuento = descuento;
}

void Nodo::setPrecio(float precio){
    this->precio = precio;
}

void Nodo::setSiguiente(Nodo *siguiente){
    this->siguiente = siguiente;
}

void Nodo::setAnterior(Nodo *anterior){
    this->anterior = anterior;
}

float Nodo::getSubtotal(){
    return this->subtotal;
}

float Nodo::getIva(){
    return this->iva;
}

float Nodo::getTotal(){
    return this->total;
}

float Nodo::getDescuento(){
    return this->descuento;
}

float Nodo::getPrecio(){
    return this->precio;
}

Nodo *Nodo::getSiguiente(){
    return this->siguiente;
}

Nodo *Nodo::getAnterior(){
    return this->anterior;
}

void Nodo::insertEnd(Nodo** start,float subtotal, float iva, float total, float descuento, float precio){
    if (*start == NULL)
    {
        Nodo* new_node = new Nodo;
        new_node->subtotal = subtotal;
        new_node->iva = iva;
        new_node->total = total;
        new_node->descuento = descuento;
        new_node->precio = precio;
        new_node->siguiente = new_node->anterior = new_node;
        *start = new_node;
        return;
    }

    // If list is not empty

    /* Find last node */
    Nodo *last = (*start)->anterior;

    // Create Node dynamically
    Nodo* new_node = new Nodo;
    new_node->subtotal = subtotal;
    new_node->iva = iva;
    new_node->total = total;
    new_node->descuento = descuento;
    new_node->precio = precio;

    // Start is going to be next of new_node
    new_node->siguiente = *start;

    // Make new node previous of start
    (*start)->anterior = new_node;

    // Make last previous of new node
    new_node->anterior = last;

    // Make new node next of old last
    last->siguiente = new_node;
}

void Nodo::display(Nodo* start){
    Nodo *temp = start;

    //printf("\nTraversal in forward direction \n");
    while (temp->siguiente != start)
    {
        cout << temp->subtotal << " " << temp->iva << " " << temp->total << " " << temp->descuento << " " << temp->precio << endl;
        
        //printf("%d ", temp->subtotal);
        temp = temp->siguiente;
    }
    //cout << temp->subtotal << " " << temp->iva << " " << temp->total << " " << temp->descuento << " " << temp->precio << endl;
    cout<<"Subtotal: "<<temp->subtotal<<endl;
    cout<<"IVA: "<<temp->iva<<endl;
    cout<<"Total: "<<temp->total<<endl;
    cout<<"Descuento: "<<temp->descuento<<endl; 
    cout<<"Precio: "<<temp->precio<<endl;
}