#include <stdio.h>


int main(){
	
	int array[5]={3, 4, 1, 2, 5};
	int contador;
	
	for (contador=0; contador<5;contador++){
		printf("%d  ", array[contador]);
	}
		
	printf("\n Ahora inverso \n");
	
	for (contador=4; contador>= 0;contador--){//Explicar porque 4
		printf("%d  ", array[contador]);
	}
	
getchar();
return 0;
}
