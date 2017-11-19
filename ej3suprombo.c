#include<stdio.h>


int main(){
	
	
	printf("\t\t\tCALCULEMOS EL VALOR DE LA SUPERFICIE DE UN ROMBO");
	printf("\n\t\t\t________________________________________________");
	
	int Dma,Dme,Sup;
	
	printf("\n\nINGRESE EL VALOR DE LA DIAGONAL MAYOR= ");
	scanf("%d",&Dma);
	printf("\n\nINGRESE EL VALOR DE LA DIAGONAL MENOR= ");
	scanf("%d",&Dme);
	
	Sup=(Dma*Dme)/2;
	
	printf("\n\nLA SUPERFICIE deL ROMBO ES= %d",Sup);
	
}
