#ifndef _ARREGLO_H_
#define _ARREGLO_H_

void leer_arreglo(float arreglo[5], short cuadritos){
	
	short contador;
	printf("=======================================[LECTURA_IMPRESO]===============================\n\n");
	for(contador=0 ; contador<=cuadritos ; contador++){	
		printf("Ingrese el elemento %hd:  ", contador);
	    scanf("%f",&arreglo[contador]);
	}
}

void imprimir_arreglo(float arreglo[5], short cuadritos){
	
	short contador;
	printf("=======================================[ARREGLO_IMPRESO]===============================\n\n");
	for(contador=0 ; contador<=cuadritos ; contador++){		
		if(contador==0){
			printf("\tArreglo: [ %g,", arreglo[0]);
		}		
		else if(contador == (cuadritos)){
			printf(" %g ]\n",arreglo[cuadritos]);
		}
		else{
			printf(" %g,",arreglo[contador]);
		}
	}
}

#endif

