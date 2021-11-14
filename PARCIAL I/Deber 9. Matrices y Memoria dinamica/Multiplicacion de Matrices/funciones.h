#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>

int **segmentar(int filas, int columnas){
	int **mat, j;
	int d = filas*columnas;
	mat=(int **)malloc(d*sizeof(int*));
	for(j=0;j<d;j++){
		*(mat+j)=(int *)malloc(d*sizeof(int));			
	}
	return mat;	
}
void encerar(int **mat, int filas, int columnas){
	for(int i=0;i<filas;i++)
	for(int j=0;j<columnas;j++)
	*(*(mat+i)+j)=0;
}
void ingresar(int **mat,int filas,int columnas){
	printf("Ingrese el valor de la matriz\n");
	for(int i=0;i<filas;i++)
	for(int j=0;j<columnas;j++)
	scanf("%d",&(*(*(mat+i)+j)));
}
void imprimir(int **mat, int filas,int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%d",*(*(mat+i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}	
}
void procesar(int **mat1, int **mat2, int **matR, int filas,int columnas){
	int d = filas*columnas;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			//*(*(matR+i)+j)=0;
			for(int h=0;h<columnas;h++){
				*(*(matR+i)+j)=	*(*(matR+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
				//cout<<*(*(matR+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j))<<"+"<<endl;
				//*(*(matR+i)+j)+=*(*(mat1+i)+h)*(*(*(mat2+h)+j));
				//*(*(matR+i)+j)=*(*(matR+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
			}
		}
	}	
}

// Inicializar la matriz dinámica
int **initialarray(int a_row,int a_column)
{
	int i,j;

	int **a=NULL;

	a=(int**)malloc(sizeof(int*)*a_row);

	for(i=0;i<a_row;i++)
		*(a+i)=(int*)malloc(sizeof(int)*a_column);

	printf("Introduzca los elementos de la matriz:\n");
	fflush(stdout);

	for(i=0;i<a_row;i++)
		for(j=0;j<a_column;j++)
			scanf("%d",*(a+i)+j);// También se puede escribir como & a [i] [i], preste atención para distinguir la diferencia entre * (a + i) + j y * (* (a + i) + j)
	return a;

}

// Matriz de salida
void outputarray(int **a,int a_row,int a_column)
{
	int i,j;
    int k=0;
    printf("Salida del resultado:\n");
	for(i=0;i<a_row;i++){
			for(j=0;j<a_column;j++){

				printf("%d ",*(*(a+i)+j));
				k++;
				if(a_column==k)
				{
					printf("\n");
					k=0;
				}
			}
	}
}
// c = a * b
int ** multiplyarray(int **a,int **b,int a_row,int a_column,int b_row,int b_column)
{
	int **c;
	int i,j,k;
	if(a_column!=b_row)
	{
		printf("¡Array1 no se puede multiplicar Array2!");
		exit(0);
	}
	else
	{
		// Construir matriz C
		c=(int **)malloc(sizeof(int*)*a_row);// Toma el número de filas en una matriz
		for(i=0;i<a_row;i++)
		*(c+i)=(int *)malloc(sizeof(int)*b_column);

		// Inicializa la matriz c y establece los elementos de la matriz c en 0
		for(i=0;i<a_row;i++)
					for(j=0;j<b_column;j++)
						*(*(c+i)+j)=0;

		// Calcular c matriz a * b = c;
		for(i=0;i<a_row;i++)
					for(j=0;j<b_column;j++)
						for(k=0;k<a_column;k++)
							*(*(c+i)+j)+=(*(*(a+i)+k))*(*(*(b+k)+j));// k es el signo de la suma

		return c;
	}
}