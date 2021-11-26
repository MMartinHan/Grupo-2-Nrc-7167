#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"
#include<stdio.h>
#include<stdlib.h>

//Programa principal
int main()
{
	int a_row,a_column;
	int b_row,b_column;

	int**a,**b,**c;
// Arreglar un
	printf("Ingrese la fila y la columna de la matriz 1:\n");
	fflush(stdout);
	scanf("%d %d",&a_row,&a_column);
    a=initialarray(a_row,a_column);
// Matriz b
    printf("Ingrese la fila y la columna de la matriz 2:\n");
    fflush(stdout);
    scanf("%d %d",&b_row,&b_column);
    b=initialarray(b_row,b_column);
	printf("\n");
	printf("Matriz 1\n");
	imprimir(a,a_row,a_column);
	printf("\n");
	printf("Matriz 2\n");
	imprimir(b,b_row,b_column);
	printf("\n");
// Matriz c
    c=multiplyarray(a,b,a_row,a_column,b_row,b_column);
    outputarray(c,a_row,b_column);
    
    return 0;
}