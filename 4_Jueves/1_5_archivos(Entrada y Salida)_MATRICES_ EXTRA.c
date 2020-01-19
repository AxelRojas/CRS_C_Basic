#include <stdio.h> 
#include <stdlib.h>
#define MAX 5

int main(int argc, char **argv){
	
FILE *archivo=NULL;
FILE *archivo_destino;
int contador1, contador2;
int matrizUno[MAX];
int operacionmatrix[MAX];
int coefa, coefb, coefc;

	
	if((archivo=fopen("datosinicio.txt","r"))==NULL || (archivo_destino=fopen("datosdestino.xls", "w"))==NULL){
		printf("ERROR AL ABRIR ARCHIVO\n");
		getchar();
		exit(0);	
	}
	else{  		 
		for(contador1=0;contador1<MAX;contador1++) {        
			fscanf(archivo, "%i", &matrizUno[contador1]);
			//printf("%d \t", matrizUno[contador1]);        
		}
		fclose(archivo);
	}

	printf("Este programa sirver para realizar la siguiente ecuaci%cn\n",162);
	printf("NOTA: Los valores de x est%cn en el .txt\n",160);
	printf("\t[y= A*x*x + B*x + C]\n");
	printf("===============================================\n\n");
	printf("\nIngrese los valores de A, B y C\n");
	printf("\nIngrese el coeficiente A: ");
	scanf("%i", &coefa);
	printf("\nIngrese el coeficiente B: ");
	scanf("%i", &coefb);
	printf("\nIngrese el coeficiente C: ");
	scanf("%i", &coefc);
	
	//PARTE DE OPERACIONES	
	for(contador1=0;contador1<MAX;contador1++) {
		operacionmatrix[contador1]= (coefa*matrizUno[contador1]*matrizUno[contador1])+(coefb*matrizUno[contador1])+coefc;
	}

	//IMPRESION EN EL ARCHIVO FINAL	
	for(contador1=0;contador1<MAX;contador1++) {
    	fprintf(archivo_destino ,"%d \t", matrizUno[contador1]);  //No poner el & 
		fprintf(archivo_destino ,"%d \n", operacionmatrix[contador1]);     
	}
	
fclose(archivo_destino);	
printf("\nEl archivo ha sido creado.");	
getchar();
getchar();
return 0;
}
