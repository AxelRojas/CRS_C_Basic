#include <stdio.h>

//DECLARACIÓN DE TIPOS DE DATOS 

int main() { 

// Tipo de dato - Nombre de la variable o identificar - igual/asignación de datos;


// variables enteras 
int enteroNumero; 

// Variables caracteres 
char caracter = 'A'; 

// Variable reales 
double puntoFlotanteNumero; 

//=============================================================

// Asignar un valor del teclado a una variable 
printf("Escriba un valor entero: "); 
scanf("%d", &enteroNumero); 

printf("Escriba un valor real: "); 
scanf("%lf", &puntoFlotanteNumero); 

// Imprimir los valores con formato 
printf("\nImprimiendo las variables enteras:\n"); 

printf("\tValor de enteroNumero = %i \n", enteroNumero);
 
printf("\tValor de caracter = %c \n",caracter); 

printf("\tValor de puntoFlotanteNumero = %lf \n", puntoFlotanteNumero); // "lf" y "f"
 
printf("\nValor de enteroNumero en base 16 = %x \n", enteroNumero);

printf("\tValor de puntoFlotanteNumero en notaci%cn cient%cfica = %e\n", 162 ,161 ,puntoFlotanteNumero);

//Linea para que salga el acento - valores en la siguiente:

//printf("\tValor de caracter en c%cdigo hexadecimal = %i\n", 162, enteroNumero); 


getchar();

return 0;
}
