#include<stdio.h>

int main(){
	
	int Numero;
	int Cont=0;
	int A=0;
	
	printf("INTRODUCE UN NUMERO: ");
	scanf("%d",&Numero);
	
	for(Cont=1;Cont<=Numero;Cont++){
		if(Numero%Cont==0){
			A++;
		}
	}
	
	
	if(A==2){
		printf("EL NUMERO ES PRIMO");
	}else{
		printf("EL NUMERO NO ES PRIMO");
	}
	
}
