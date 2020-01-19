#include <stdio.h>

int main(){
	
	

short contador, contador2 , jugadores;

	do{
		
		printf ("N%cmero de jugadores: ",163);
		scanf("%hd", &jugadores);
	
	}while(jugadores<1 || jugadores>23);
	
	char nomjuga[jugadores][20]; 
	
	for (contador=0;contador<jugadores; contador++){
		
		printf("Jugador %hd] Ingrese su nombre: ", contador+1);
		scanf(" %s", nomjuga[contador]);
		//scanf(" %[^\n]", nomjuga[contador]);
	
	}
	
	//IMPRIMIR ARCHIVOS
	printf("\n\n=====================[NOMBRES]==========================\n");
	for (contador=0;contador<jugadores; contador++){
		printf("\n%s", nomjuga[contador]);//Forma de imprimir la cadena	
	}



getchar();
getchar();
return 0;
} 
