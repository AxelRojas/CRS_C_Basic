#include <stdio.h>  

int sum(int num1, int num2); //Sirve para no ponerla arriba 

int main (int arg, char* argv[]){
	
int v1, v2, rs; //Variables locales	

	printf ("Ingrese el number 1: ");
	scanf("%hd", &v1);
	
	printf ("Ingrese el number 2: ");	
	scanf("%hd", &v2);	

	rs= sum(v1,v2);	
	printf("La suma de los n%cmeros: %d \n",163, rs);	

	rs= sum2(v1,v2);	
	printf("La suma de los n%cmeros: %d \n",163, rs);
	
return 0; 
}

int sum(int num1, int num2){
	  
	int result; //Variable local
	result= num1+num2;	
		 
return result; 
} 

void sum2(int num1, int num2){
	
	int result; //Variable local
	result= num1+num2;	
		 
return result; 
} 

