#include <stdio.h>  //Librer�a

int main (int arg, char* argv[]) // funci�n principal
 
{ 
float  numUno, numDos, resultado; //Para int debemos colocar %d

numUno=0; //declaraci�n de variables
numDos=0; //declaraci�n de variables
resultado=0;//declaraci�n de variables
   
    printf("Este programa suma dos numeros dados por el usuario\n\n");//Imprime pantalla
    printf("Ingrese el primer n%cmero\n",163);//Imprime pantalla
    scanf("%f", &numUno);    //Lee el primer dato ingresado
    printf("Ingrese el segundo n%cmero\n",163);//Imprime pantalla
    scanf("%f", &numDos);	//Lee el segundo dato ingresado


    resultado=numUno+numDos;	//Parte de operaci�n e impresi�n de resultado 
    printf("\nLa suma de %.2f y %.2f es %.2f", numUno, numDos, resultado ); //Imprime el mensaje final con cierta cantidad de datos

    getchar(); //Mantiene la pantalla est�tica
    getchar(); //Mantiene la pantalla est�tica
	
    return 0; // Devuelve cero  cuando termina la ejecuci�n 
} // Termina programa

