#include <stdio.h>

void llamarFuncion();//cuesti�n est�tica 

int main(){
	int contador; 
    for(contador=0 ; contador < 5 ; contador++){
        llamarFuncion();
    }
}

void llamarFuncion(){
    //static 
	static int numVeces = 0;//Variable global
    printf("Esta funci%cn se ha llamado %d veces.\n",162,++numVeces);
}



