#include <stdio.h>

int main(){

   	int num = 10;
   	int *p;

	//Asiagnación
   	p = &num;

   	printf("La ubicacion* de NUM es: %i\n", p);
   	//printf("La ubicacion* de NUM es: %p\n", p);//Para hexadecimal
	printf("El valor de NUM es: %i", *p);

   
return 0;
}
