#include <stdio.h>

int main () { 

char *apuntador, c; 
c = 'a'; 
apuntador = &c; 

	// imprime el car�cter de la localidad a la que apunta 
	printf("Car%ccter: %c\n",160,*apuntador); 
	
	// imprime el c�digo ASCII de la localidad a la que apunta 
	printf("C%cdigo ASCII: %d\n",162,*apuntador); 
	
	// imprime la direcci�n de memoria de la localidad a la que apunta 
	printf("Direcci%cn de memoria: %d\n",162,apuntador); 
	
return 0; 
}
