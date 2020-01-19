#include <stdio.h>  //Librería

int main (int arg, char* argv[]) // función principal
 
{ 
float  numUno, numDos, resultado; //Para int debemos colocar %d

numUno=0; //declaración de variables
numDos=0; //declaración de variables
resultado=0;//declaración de variables
   
    printf("Este programa suma dos numeros dados por el usuario\n\n");//Imprime pantalla
    printf("Ingrese el primer n%cmero\n",163);//Imprime pantalla
    scanf("%f", &numUno);    //Lee el primer dato ingresado
    printf("Ingrese el segundo n%cmero\n",163);//Imprime pantalla
    scanf("%f", &numDos);	//Lee el segundo dato ingresado


    resultado=numUno+numDos;	//Parte de operación e impresión de resultado 
    printf("\nLa suma de %.2f y %.2f es %.2f", numUno, numDos, resultado ); //Imprime el mensaje final con cierta cantidad de datos

    getchar(); //Mantiene la pantalla estática
    getchar(); //Mantiene la pantalla estática
	
    return 0; // Devuelve cero  cuando termina la ejecución 
} // Termina programa

