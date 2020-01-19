#include <stdio.h>
#include <stdlib.h>
#include "arreglo.h"

int main(int argc, char *argv[]){
	
	float Arreglo[5];
	short espacios=5;

	printf("lectura, impresi%cn, promedio y modificaci%cn de un arreglo.\n\n",162,162);

	leer_arreglo(Arreglo, espacios);
    imprimir_arreglo(Arreglo, espacios);

	
getchar ();	
getchar ();
return 0;
}
