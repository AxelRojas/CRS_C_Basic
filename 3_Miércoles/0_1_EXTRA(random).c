#include<stdio.h>  // libreria basica para entrada y salida  
#include<stdlib.h> // libreria para el uso de rand()  
#include<time.h>   // libreria para el uso de time()  

int main( ){
  
int numero,cantidad,contador;  
int hora = time(NULL);  
srand(hora);  
      
    printf("Ingrese la cantidad de numeros aleatorios que desea generar\n");  
    scanf("%d",&cantidad);  
      
            /* Generamos un ciclo que se repite la cantidad 
               de veces indicada. En cada vuelta del ciclo se 
               genera y se imprime un numero aleatorio. */  
      
    for(contador = 0; contador<cantidad; contador++){    
        numero = rand()%100;  
        printf("%d ", numero);  
    }  
            
getchar(); 
return 0;
} 
