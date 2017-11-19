#include<stdio.h>
#include<math.h>

int main(){
	
	float Sup;
	float Radio;     //sup al cuadrado dividido pi(3.14)
	float Diametro;  //es el radio*2
	
	
	printf("INGRESE LA SUPERFICE DEL CIRCULO= ");
	scanf("%f",&Sup);
	
	Radio=sqrt(Sup)/3.14;
	Diametro=Radio*2;
	printf("\n\n DIAMETRO DEL CIRCULO= %.2f",Diametro);
	
	
	
	
	
	
	
}
