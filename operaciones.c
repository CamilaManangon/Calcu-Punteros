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

void comparacion(int t1, int t2, char *cadena1, char *cadena2){
  int c = 1;
  int tam = 0;

  if (t1 != t2) {
    printf("Las cadenas son diferentes\n");
  } else {
    while (*cadena1 != '\0' && *cadena2 != '\0' && c != 0) {
      if (*cadena1 != *cadena2) {
        c = 0;
      }
      cadena1++;
      cadena2++;
    }

    if (c == 1) {
      printf("Las cadenas son iguales\n");
    } else {
      printf("Las cadenas son diferentes\n");
    }
  }
}
