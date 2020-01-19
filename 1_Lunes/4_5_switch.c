#include <stdio.h> 

int main (int arg, char* argv[]){
  
int input;

float numUno, numDos,resultado;

	printf("Escoge una opci%cn\n", 162);	
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicaci%cn\n", 162);
	printf("4. Divisi%cn\n", 162);
	scanf("%d", &input);


		switch ( input ){
			
			case 1:
				
				printf("\n==========SUMA=============\n\n");
				printf("\nIngrese el primer n%cmero: ",163);  
	   			scanf("%f", &numUno);  
			    printf("\nIngrese el segundo n%cmero: ",163);  
			    scanf("%f", &numDos);  
			
			    resultado=numUno+numDos;	
			    printf("\nLa suma de %.2f + %.2f es %.2f", numUno, numDos, resultado ); 
				
			break;	
				
			case 2:
				printf("\n==========RESTA=============\n\n");
				printf("\nIngrese el primer n%cmero: ",163);  
	   			scanf("%f", &numUno);  
	    
			    printf("\nIngrese el segundo n%cmero: ",163);  
			    scanf("%f", &numDos);  
			
			    resultado=numUno-numDos;	
			    printf("\nLa resta de %.2f - %.2f es %.2f", numUno, numDos, resultado ); 
				
			break;
			
			case 3:
				
				printf("\n==========MULTIPLICACION=============\n\n");
				printf("\nIngrese el primer n%cmero: ",163);  
	   			scanf("%f", &numUno);  
			    printf("\nIngrese el segundo n%cmero: ",163);  
			    scanf("%f", &numDos);  
				
				resultado=numUno*numDos;	
	    		printf("\nLa multiplici%cn de %.2f * %.2f es %.2f",162, numUno, numDos, resultado); 
				
			break;
			
			case 4:
				printf("\n==========DIVISION=============\n\n");								
				printf("\nIngrese el primer n%cmero: ",163);  
	   			scanf("%f", &numUno);  
	    
			    printf("\nIngrese el segundo n%cmero: ",163);  
			    scanf("%f", &numDos);  
			    
				resultado=numUno/numDos;	
	    		printf("\nLa divi%cn de %.2f / %.2f es %.2f",162, numUno, numDos, resultado); 
				
			
			break;
			
			default:
				
			printf("\nUppss te equivocaste de opciones");
	
			break;
		}

return 0;
}

