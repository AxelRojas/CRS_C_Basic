#include <stdio.h>
int main(){
	
	int max,aux, contador1, contador2, contador3;

	
	printf("====================[METODO BURBUJA]============================\n");
	printf("Ingrese el size del arreglo: ");
	scanf("%d",&max);
	int array[max];
	
	for(contador1=0;contador1<max;contador1++)
	{
		printf("Ingrese el dato %hd: ", contador1+1);
		scanf("%d",&array[contador1]);
	}

	//ORDENAMIENTO DE DATOS
	for(contador1=0;contador1<max;contador1++){
		for(contador2=0;contador2<max-1;contador2++){
			
			if (array[contador2]>=array[contador2+1]){
				aux=array[contador2];
				array[contador2]=array[contador2+1];
				array[contador2+1]=aux;
			}
		}
	}
	
	printf("\nLos n%cmeros ordenados son: \n",163);
	for(contador3=0; contador3<max; contador3++){
		printf("%d ", array[contador3]);
	}

	getchar();
	return 0;
}
