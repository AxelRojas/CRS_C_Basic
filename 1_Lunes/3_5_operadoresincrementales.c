#include <stdio.h> 

int main (int arg, char* argv[]) {
 
int x=1;

	printf("Este programa incrementa y decrementa los valores de una variable:\n\n");	
	printf("El valor inicial es: %d ", x);
	
	x= ++x;
	printf("\nEl valor de x ahora es: %d ", x);
	
	x= x--;
	printf("\nAhora el valor de x es nuevamente: %d \n", x);
	
	//+= -> a=a+2 o puede escribirse como a+=2

	
	
	getchar(); 
     
    return 0; 
}
