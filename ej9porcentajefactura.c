#include<stdio.h>

int main(){
	
	float Total;
	float Descuento;  //en %
	float Resultado;  //(TOTAL*DESCUENTO)/100
	float Valorfinal;
	
	printf("INGRESE EL MONTO TOTAL DE LA FACTURA= ");
	scanf("%f",&Total);
	
	printf("\n\nINGRESE EL DESCUENTO EN PORCENTAJE= ");
	scanf("%f",&Descuento);
	
	Resultado=(Total*Descuento)/100;
	Valorfinal=Total-Resultado;
	
	printf("\nMONTO DE LA FACTURA = %.2f",Total);
	printf("\nPORCENTAJE DE DESCUENTO = %.2f",Descuento);
	printf("\nVALOR FINAL DE LA FACTURA = %.2f",Valorfinal);
	
}
