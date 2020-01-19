#include<stdio.h>

void suma(short a, short b);
void resta(short a, short b);
void multiplicacion(short a, short b);
void division(short a, short b);

int main(int argc, char* argv[]){
	
short num1=0;
short num2=0;
//DEJAR QUE LO PASEN CON FUNCIONES ENTERAS Y CON CICLOS DO WHILE

printf("(Suma, Resta, Multiplicaci%cn, Divisi%cn)\n\n",162,162);
printf("Ingrese el primer valor: ");
scanf("%hd", &num1);
printf("Ingrese el segundo valor: ");
scanf("%hd",&num2);

//funciones que realizan operaciones 
suma(num1,num2);
printf("\n");
resta(num1,num2);
printf("\n");
multiplicacion(num1,num2);
printf("\n");
division(num1, num2);

getchar();
return 0; 
}

void suma(short a, short b){		
	float resultado;
	resultado=(float)a+b;
	printf("\n\tEl resultado de la suma:\n\t%hd + %hd = %g",a,b,resultado);
}

void resta(short a, short b){	
	float resultado;
	resultado=(float)a-b;
	printf("\n\tEl resultado de la resta:\n\t%hd - %hd = %g",a,b,resultado);
}

void multiplicacion(short a, short b){
	float resultado;
	resultado=(float)a*b;
	printf("\n\tEl resultado de la multiplicac%cn:\n\t%hd * %hd = %g",162,a,b,resultado);
}

void division(short a, short b){
	
	float resultado;
	if (b!=0){
	    resultado=(float)a/b;
	    printf("\n\tEl resultado de la divisi%cn:\n\t%hd / %hd = %g",162 ,a,b,resultado);
	}
    else{
    	printf("Divisi%cn no realizada(No se puede dividir entre 0)",162);
	}
}

