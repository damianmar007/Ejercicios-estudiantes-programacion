#include<stdio.h>

int main(){
	
	int Numero;
	int Acump=0;
	int Acumi=0;
	int Cont=0;
	
	while(Cont<10){
		
		printf("INGRESE NUMEROS EN UBICACION %d :" , Cont);
		scanf("%d", &Numero);
		
		if(Numero %2==0){
			Acump=Acump+Numero;
			Cont++;
		}else{
			Acumi=Acumi+Numero;
			Cont++;
		}		
	}
	
	
	if(Acump>Acumi)
		printf("PROPORCIONAN MAYOR SUMA LA \n POSICION DE NUMEROS PARES %d",Acump);
	else
		printf("PROPORCIONAN MAYOR SUMA LA \n POSICION DE NUMEROS IMPARES %d",Acumi);
	
	
}
