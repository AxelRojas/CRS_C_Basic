#include <stdio.h>  

int main (int arg, char* argv[]){
  
float rad,peri;rad=0;
peri=0;

float const pi=3.141592;

	printf("Este programa te da el per%cmetro de un c%crculo\n\n",161,161); 
	printf("Ingrese el valor del radio: ");
	scanf("%f", &rad);
	
	peri=pi*(2*rad);
	printf("El per%cmetro del c%crculo es: %.2f",161,161, peri); 

    getchar(); 		 
    return 0; 
} 


