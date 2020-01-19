#include <stdio.h> 

int main (int arg, char* argv[]){  
int num, suma, numf;
num=0;
suma=0;
numf=0;
	
	printf("\nIngrese el n%cmero inicial: ",163);
	scanf("%d", &num);
	printf("\nIngrese el n%cmero final: ",163);
	scanf("%d", &numf);
	
	for (num; num<=numf; num++ ){
		suma=suma + num;
		printf("\n %d ", suma);
	}
	
	printf("\n\nSuma = %d \n", suma);

return 0;  
}
