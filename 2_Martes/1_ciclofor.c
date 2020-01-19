#include <stdio.h> 

int main (){ 
 
int x;
	
printf("Este programa es un ejemplo del ciclo FOR \n");
	
	for(x = 0; x<20; x++){//NOTA nunca se da el último resultado si solo ponemos el > o el <

	//Primero inicializo la variable
	//Segundo la condiciono 
	//Tercero determino si crecerá o decrecerá, etc.

		printf("\t%d\n", x);
	}

    return 0;  
} 
