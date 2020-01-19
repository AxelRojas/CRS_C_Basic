#include<stdio.h>

struct pelicula{
	
	char *nombre; 
	char *genero; 
	short anio;
	
};

void imprimirDatosPelicula(struct pelicula); 
struct pelicula llenarDatosPelicula(char *nombre, char *genero, short anio);// (char nombre[], char genero[], short anio); // 


int main(){ 

	char movie [20];
	printf("\nMovie: ");
	scanf("%[^\n]", movie);	
	fflush( stdin ); //Para limpiar el buffer
	
	char genero [20];
	printf("\nGenero: ");
	scanf("%[^\n]", genero);
	fflush( stdin );
	
	int year;	
	printf("\nYear: ");
	scanf("%i", &year);
	
	
	struct pelicula matrix2 = llenarDatosPelicula(movie, genero, year); //Instanciar
	imprimirDatosPelicula(matrix2); 
	

return 0; 
}

//Método constructor
struct pelicula llenarDatosPelicula(char nombre[], char genero[], short anio){ // (char *nombre, char *genero, short anio);//
	struct pelicula movie; 
	movie.nombre = nombre; 
	movie.genero = genero; 
	movie.anio = anio; 
	
return movie; 
}

void imprimirDatosPelicula(struct pelicula movie){
 
 	int cont;
 	printf("\n\n=============================\n\n");
	printf("PELICULA: %s\n", movie.nombre); 
	printf("GENERO: %s\n", movie.genero); 
	printf("ANIO: %d\n", movie.anio); 


} 




