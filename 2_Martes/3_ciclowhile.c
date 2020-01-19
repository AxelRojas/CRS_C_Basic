#include <stdio.h> 

int main (int arg, char* argv[]){
  
float x =0;
	
	printf("Este programa es un ejemplo del ciclo DO WHILE \n");
	printf("Ingrese cualquier n%cmero:  ", 163 );	
	scanf("%f", &x);
	
	do{ 
		printf("\tEl valor de x: %.2f \n", x);
		x++;
	} while(x<=20);//RECUERDA: Poner en el while coma/punto
	
return 0;  
} 
