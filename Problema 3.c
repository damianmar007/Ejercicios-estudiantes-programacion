#include<stdio.h>

int main(){
	
	int Numero;
	int Cont23=0;
	

	while(Numero != 235){
		printf("INGRESA UN NUMERO: \n");
	    scanf("%d", &Numero);
		if(Numero==23){
			Cont23++;			
		}
	}
	
	printf("numero 23 se ingreso  %d  veces", Cont23);
	
}
