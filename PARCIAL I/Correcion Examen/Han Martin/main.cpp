#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include "Nodo.h"
#include "Nodo.cpp"

char *ingreso(const char *msj);
using namespace std;

int main()
{

    Nodo* start = NULL;
    float subtotal = 0.0;
    float iva = 0.0;
    float total = 0.0;
    float descuento = 0.0;
    float precio = 0.0;
    int cantidad = 0;
    char datos[5];

    strcpy(datos,ingreso("Ingrese el valor del subtotal de la factura: "));
    subtotal=atof(datos);
    cout<<"\n"<<endl;
    iva = subtotal * 0.12;
    total = subtotal + iva;
    if(total>=1 && total <= 100){
        descuento = 0.05;
        precio = total - (total * descuento);
    }else if(total>100 && total <=1000){
        descuento = 0.10;
        precio = total - (total * descuento);
    }else if(total>1000){
        descuento = 0.15;
        precio = total - (total * descuento);
    }
    start->insertEnd(&start, subtotal, iva, total, descuento, precio);
    cout<<"Factura: "<<endl;
    start->display(start);
    return 0;
}

char *ingreso(const char *msj){
	char *dato=new char[5];
	char c;
	int i=0;
	printf("%s",msj);
	while((c=getch())!=13){
		if((c>='0'&& c<='9')||(c=='.')){
			printf("%c",c);
            //*(dato+i)=c;
			dato[i++]=c;
		}
	}
    //*(dato+i)='\0';
	dato[i]='\0';
	return dato;
}