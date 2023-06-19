#include<stdio.h>
#include"operaciones.h"


int main(void){
    int opc,t;
    float num1, num2, res,escalar;
    num1 = 0;
    num2 = 0;
    res = 0;
    escalar = 0;
    printf("Ingrese el primer numero: ");
    scanf("%f",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&num2);
    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &t);
    float arreglo[t];
    for(int i = 0;i<t;i++){
        printf("Ingrese el elemento %d del arreglo: ",i+1);
        scanf("%f",&arreglo[i]);
    }
    suma(&num1,&num2,&res);
    resta(&num1,&num2,&res);
    producto(&num1,&num2,&res);
    division(&num1,&num2,&res);
    printf("Ingrese el escalar por el que quiera sumar el arreglo: ");
    scanf("%f",&escalar);


    sumaArregloEscalar(arreglo, t, escalar);

    for(int i = 0; i<t; i++){
        printf("%.2f\n",arreglo[i]);
    }

    return 0;
}