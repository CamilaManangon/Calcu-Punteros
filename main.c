#include<stdio.h>
#include <string.h>
#include"operaciones.h"


int main(void){
    int opc,t;
    float num1, num2, res,escalar;
    num1 = 0;
    num2 = 0;
    res = 0;
    escalar = 0;
    printf("CALCULADORA\n\n");
    printf("Ingrese el primer numero: ");
    scanf("%f",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&num2);

    suma(&num1,&num2,&res);
    resta(&num1,&num2,&res);
    producto(&num1,&num2,&res);
    division(&num1,&num2,&res);

    printf("\nARREGLO\n\n");
    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &t);
    float arreglo[t];
    for(int i = 0;i<t;i++){
        printf("Ingrese el elemento %d del arreglo: ",i+1);
        scanf("%f",&arreglo[i]);
    }

    printf("Ingrese el escalar por el que quiera sumar el arreglo: ");
    scanf("%f",&escalar);


    sumaArregloEscalar(arreglo, t, escalar);

    for(int i = 0; i<t; i++){
        printf("%.2f\n",arreglo[i]);
    }

    printf("\nCOMPARACION CADENAS\n\n");
    char cadena1[50], cadena2[50];
    int t1, t2;
    printf("Ingrese la primera cadena: ");
    scanf("%s", cadena1);
    t1 = strlen(cadena1);
    printf("Ingrese la segunda cadena: ");
    scanf("%s", cadena2);
    t2 = strlen(cadena2);
 
    comparacion(t1, t2, cadena1, cadena2);

    return 0;
}