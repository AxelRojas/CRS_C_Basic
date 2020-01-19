#include <stdio.h> 
#include <stdlib.h>
#define MAX 3

int main(int argc, char **argv){
	
FILE *archivo=NULL;
FILE *archivo2=NULL;
FILE *archivo_destino;

int contador1, contador2;
int matrizUno[MAX][MAX];
int matrizDos[MAX][MAX];
int sumatrix[MAX][MAX];
	
	if((archivo=fopen("matrizUno.txt","r"))==NULL || (archivo_destino=fopen("matrizfinal_destino.txt", "w"))==NULL){
		printf("ERROR AL ABRIR ARCHIVO\n");
		getchar();
		exit(0);	
	}
	
	else{
	  		 
		for(contador1=0;contador1<MAX;contador1++) 
			for(contador2=0;contador2<MAX;contador2++){        
					fscanf(archivo, "%i", &matrizUno[contador1][contador2]);          
				}
		fclose(archivo);
	}
	
	//ARCHIVO 2
	if((archivo2=fopen("matrizDos.txt","r"))==NULL ){
		printf("ERROR AL ABRIR ARCHIVO 2\n");
		getchar();
		exit(0);	
	}
	else{  		 
		for(contador1=0;contador1<MAX;contador1++) 
			for(contador2=0;contador2<MAX;contador2++){        
					fscanf(archivo2, "%i", &matrizDos[contador1][contador2]);          
				}
		fclose(archivo2);		
	}
	
	//SUMA E IMPRESION EN EL ARCHIVO FINAL	
	for(contador1=0;contador1<MAX;contador1++) {
		for(contador2=0;contador2<MAX;contador2++){    
			sumatrix[contador1][contador2]= matrizUno[contador1][contador2] + matrizDos[contador1][contador2];
			fprintf(archivo_destino ,"%d ", sumatrix[contador1][contador2]);  //No poner el &      
		}
	fprintf(archivo_destino, "\n");	
	}
		
fclose(archivo_destino);	
printf("El archivo ha sido creado.");
	
getchar();
return 0;
}
