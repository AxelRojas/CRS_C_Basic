#include <stdio.h> 

int main (int arg, char* argv[]){

int input;
//Varaibles para las operaciones
float  numUno, numDos, resultado; 

		do{	
		
			printf("\n\n=================[MENU]=================\n");
			printf("1. Suma\n");
			printf("2. Resta\n");
			printf("3. Multiplicaci%cn\n", 162);
			printf("4. Divisi%cn\n", 162);
			printf("5. SALIR\n");
			scanf("%d", &input);
			
			//if(input != 5){
				if(input != 5 && (input > 0 && input<6  )){	
				printf("\n\n==================[DATOS]=================\n");
				printf("\nIngrese el primer n%cmero: ",163);  
				scanf("%f", &numUno);  
				printf("\nIngrese el segundo n%cmero: ",163);  
				scanf("%f", &numDos); 	
			
				switch ( input ){
					
					case 1:
						printf("\n==========SUMA=============\n");
						resultado=numUno+numDos;	
					break;	
							
					case 2:
						printf("\n==========RESTA=============\n");
						resultado=numUno-numDos;	
					break;
						
					case 3:					
						printf("\n==========MULTIPLICACION=============\n");
						resultado=numUno*numDos;	
			    		//printf("\nLa multiplici%cn de %.2f * %.2f es %.2f",162, numUno, numDos, resultado); 										
					break;
						
					case 4:	
						printf("\n==========DIVISION=============\n");								
						resultado=numUno/numDos;	
					break;
					
					/*default:
						printf("\nIngresa un valor correcto");
					break;*/	
				}
				
				printf("\nEl resultado es:%.2f ",resultado); 
				
			}
			else{
				//if(input != 5){
					printf("\nIngresa un valor correcto");
				//}
			}
			
		} while (input!= 5 );  //Este da la salida desde el principio del menu

	getchar();   

	return 0; 
}
