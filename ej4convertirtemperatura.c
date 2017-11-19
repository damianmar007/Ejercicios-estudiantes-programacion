#include<stdio.h>


int main(){
	
	printf("CONVERTIR DE GRADOS CENTRIGADOS A FARENHEIT Y A KELVIN");
	printf("\n______________________________________________________");
	
	float Grados;
	float Centigrados;
	float Farenheit;
	float Kelvin;
	
	
	printf("\n\nINGRESA LA TEMPERATURA= ");
	scanf("%f",&Grados);
	
	Centigrados=Grados;
	Farenheit=(Grados*9)/5+32;
	Kelvin=Grados+273.15;
	
	printf("\n\nCENTIGRADOS= %.1fC",Centigrados);
	printf("\nFARENHEIT= %.1fF",Farenheit);
	printf("\nKELVIN= %.1fK",Kelvin);
	
	
	
}
