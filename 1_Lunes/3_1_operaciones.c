#include <stdio.h>  //Version con valores inicializados 

int main (int arg, char* argv[]) {  

int v1 = 34;
int v2 = 43;
float v3 = 34.23;

int resultado;
resultado = v1 + v2;

printf("La suma de ambos valores es: %d",resultado);



float resultado2;
resultado2 = v1 + v3;
printf("\nLa suma de ambos valores es: %lf",resultado2);


getchar(); 		 
return 0; 
} 
