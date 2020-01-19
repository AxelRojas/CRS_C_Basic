#include <stdio.h>

int main () { 

char *apuntador, c; 
c = 'a'; 
apuntador = &c; 

	// imprime el carácter de la localidad a la que apunta 
	printf("Car%ccter: %c\n",160,*apuntador); 
	
	// imprime el código ASCII de la localidad a la que apunta 
	printf("C%cdigo ASCII: %d\n",162,*apuntador); 
	
	// imprime la dirección de memoria de la localidad a la que apunta 
	printf("Direcci%cn de memoria: %d\n",162,apuntador); 
	
return 0; 
}
