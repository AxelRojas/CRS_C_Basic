#include <stdio.h>  

void alternative(){
	printf("Hola todos (From other funtion)");	
}


int main (int arg, char* argv[]){
  	printf("Hola chicos");
	alternative();		 
    return 0; 
} 
