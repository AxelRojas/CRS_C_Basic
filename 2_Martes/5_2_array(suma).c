#include <stdio.h>

int main(){
	
	int size;
	short contador1;//contador1 es para renglones

	printf("=======================[SUMA DE MATRICES]================================\n\n");
	printf("\nIngrese el n%cmero de columnas de la matriz: ",163);
	scanf("%i", &size);

	int firstmatrix[size], secondmatrix[size], sumatrix[size];

	printf("\nIngrese los valores de la primera matriz: ");
	for(contador1=0; contador1<size; contador1++){
		scanf("%i", &firstmatrix[contador1]);
	}

	printf("\nIngrese los valores de la segunda matriz: ");
	for(contador1=0; contador1<size; contador1++){
		scanf("%i", &secondmatrix[contador1]);
	}


	printf("\nSuma de matrices:\n\n");
	for(contador1=0; contador1<size; contador1++){
		sumatrix[contador1]= firstmatrix[contador1] + secondmatrix[contador1];
		printf("\t%d\t", sumatrix[contador1]);
	}
	
getchar();
return 0 ; 
}
