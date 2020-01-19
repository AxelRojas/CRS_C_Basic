#include<stdio.h>
#include<string.h>

typedef struct{
	
	int paginas;
	char nombre[50];
	float precio;
	
}libro;

int main(int argc, char* argv[]){
	
	int i;
	libro HG, HP;
	
	//Primer libro
	HG.paginas=391;
	HG.precio=342.99;
	strcpy(HG.nombre, "The Hunger Games");//Es método de string y sirve para copiar cadenas
	printf("El libro %s tiene %d p%cginas\n",HG.nombre, HG.paginas, 160);
	printf("Costo: $%g.\n",HG.precio);
	
	
	printf("\n\n\n");
	//Segundo libro
	HP.paginas=534;
	HP.precio=499.99;
	strcpy(HP.nombre, "Harry Potter");
	printf("El libro %s tiene %d p%cginas\n",HP.nombre, HP.paginas, 160);
	printf("Costo: $%g.\n",HP.precio);
	
	
	printf("\n\n\n");
	//Arreglo de libros (Arreglo de estructuras)
	libro AB[10];
	for(i=0 ; i <10 ; i++){
		AB[i].precio = 25 + i;
		printf("El precio %d es de %g\n",i+1,AB[i].precio);
	}
	
	
getchar();
return 0;
}

