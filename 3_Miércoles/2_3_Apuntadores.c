#include<stdio.h>

int main(){ 

short nums[] = {55,44,33,22,11}; 
short *ap, cont; 
ap = nums;

	for (cont = 0; cont < 5 ; cont++){
		printf("%i\n",ap);
		//printf("%i\n",(ap+cont));//*(ap+cont)
	} 

return 0; 
}
