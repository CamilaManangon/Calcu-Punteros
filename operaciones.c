#include<stdio.h>

void suma(float* num1, float* num2, float* res){
    *res = *num1 + *num2;
    printf("La suma es: %.2f\n",*res);
}

void resta(float* num1, float* num2, float* res){
    *res = *num1 - *num2;
    printf("La resta es: %.2f\n",*res);
}

void producto(float* num1, float* num2, float* res){
    *res = *num1 + *num2;
    printf("La multiplicacion es: %.2f\n",*res);
}

void division(float* num1, float* num2, float* res){
    if(*num2 != 0){
        *res = *num1 / *num2;
        printf("La division es: %.2f\n",*res);
    }else{
        printf("No existe division para 0.\n");
    }
}

/*void sumaArregloEscalar(float* arreglo, int t, float escalar){

    for(int i = 0;i<t;i++){
        *arreglo = *arreglo + escalar;
        arreglo++;
    }
}*/

void sumaArregloEscalar(float* arreglo, int t, float escalar){
    for(int i = 0;i<t-1;i++){
        *(arreglo+1) = *arreglo + escalar;
        arreglo++;
    }
}