#include<stdio.h>

int main(){
	
	int Numero;
	int Cont=0;
	
	while(Numero > 0){
		printf("INGRESA UN NUMERO: ");
		scanf("%d",&Numero);
		
		if(Numero%2==0){				
		        Cont++;
		}
	
	}
	 
	printf("TOTAL NUMERO PARES: %d", Cont);   
	
}
