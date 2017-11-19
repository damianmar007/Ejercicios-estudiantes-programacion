#include<stdio.h>


int main(){
	
	float Acum=0;
	int Cont=1;
	int Suma;
	
	printf("\n\t\t\tSACAREMOS EL PROMEDIO DE 10 VALORES");
	
	while(Cont<11){
		
		printf("\n\nINGRESAR VALOR %d = ",Cont);
		scanf("%d",&Suma);
		
		Acum=Acum+Suma;
		Cont++;
		
	}
	
	Acum=(float)Acum/Cont;
	
	printf("\n\n\t\tPROMEDIO= %.2f",Acum);
		
	
}
