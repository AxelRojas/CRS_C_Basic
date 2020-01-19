#include <stdio.h>

int main(){
	
    FILE *archivo;
    FILE *archivo_destino;
    char contador1,contador2;
    char c='\0';
    char arreglo[30]={'\0'};
    
 	if((archivo=fopen("archivo.txt","r"))==NULL || (archivo_destino=fopen("archivodestino.txt", "w"))==NULL){
        printf("No pudo cargar el archivo");
        getchar();
        exit(0);
    }   
	else {//EN CASO DE QUE SI EXISTAN AMBOS ARCHIVOS
		c = fgetc(archivo);
			while(feof(archivo)==0){				
				arreglo [contador1]=c;
				//printf("%c", arreglo[contador1]);
				contador1++;
				c=fgetc(archivo);	
			}
			
		arreglo[contador1]='\0';
	    fclose(archivo);
	}

	printf("\nSALIDA DEL PROGRAMA\n");

	for(contador1=0;contador1<30 ;contador1++ ){
		printf("%c", arreglo[contador1]);
		fprintf(archivo_destino ,"%c", arreglo[contador1]);//ULTRAMEGA MORTAL
	}	
	
fclose(archivo_destino);	
printf("\n\nEl archivo ha sido creado.");
	
getchar();
return 0;
}

