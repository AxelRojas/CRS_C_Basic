#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv){
	
	FILE *archivo=NULL;
	int contador = 0;
	char arreglo [30];//Posteriormente cambiar e inicializar en nulo para que vean la diferencia ={'\0'};
	char c='\0';
	
	printf("PROGRAMA DE LECTURA DE UN ARCHHIVO SIN FORMATO [SOLO TEXTO]\n");
	printf("===========================================================\n\n\n");
	
	if((archivo= fopen("archivo.txt", "r")) == NULL){
		printf("No se pudo cargar el archivo...");
		getchar();
		exit(0);
	}
	else{	
		c = fgetc(archivo);
		while(feof(archivo)==0){
			arreglo [contador]=c;
			printf("%c", arreglo[contador]);
			contador++;
			c=fgetc(archivo);	
		}
		
		arreglo[contador]='\0';
		printf("\n\nARCHIVO GUARDADO EN ARREGLO\n\n");
		
		int contador1;
		for(contador1=0;contador1<30 ;contador1++ ){
			printf("%c", arreglo[contador1]);
		}
	}
	
fclose(archivo);
getchar();
return 0;
}
