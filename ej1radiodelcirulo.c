#include<stdio.h>


int main(){
	
	float Pi=3.14;
	float Radio;
	float Circunferencia;
	float Superficie;
	
	
	
	printf("\t\tCALCULAREMOS LA LONGITUD DE CIRCUNFERENCIA Y LA SUPERFICIE DE UN CIRCULO");
	printf("\n\nINGRESE EL RADIO DEL CIRCULO= ");
	scanf("%f",&Radio);
	
	Circunferencia=Radio*Pi;
	Superficie=Radio*Radio*Pi;
	
	printf("\n\nCIRCUNFERENCIA DEL CIRCULO= %.2f",Circunferencia);
	printf("\n\nSUPERFICIE DEL CIRCULO= %.2f",Superficie);
	
}
