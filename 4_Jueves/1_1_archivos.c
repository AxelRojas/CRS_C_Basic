#include <stdio.h> 

int main(){
	
	FILE *archivo=NULL;//LO inicializamos como nulo
	char c='\0';//Inicializarla en vacía
	
	printf("PROGRAMA DE LECTURA DE UN ARCHHIVO SIN FORMATO [SOLO TEXTO]\n");
	printf("===========================================================\n\n\n");
	
	archivo= fopen("archivo.txt", "r");//la r es de read 
	
	while(feof(archivo)==0){//feof  hasta que el valor final del archivo sea igual a cero 
		
		c=fgetc(archivo);//fgetc obtiene el contenido del archivo
		printf("%c",c);
	
	}

	fclose(archivo);//Cerramos el flujo de datos

getchar();
return 0;
}

/*
	if((archivo= fopen("archivo.txt", "r")) == NULL){//Nulo significa que no fue encontrado 
		printf("No se pudo cargar el archivo...");
		getchar();
		exit(0);
	}
	else{	
		while(feof(archivo)==0){
			c=fgetc(archivo);
			printf("%c",c);
		}
	fclose(archivo);
	}

*/

