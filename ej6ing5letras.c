#include<stdio.h>
#include<conio.h>
FRASE();

int Letras=1;

int main(){
	
	
	
	char A,B,C,D,E;	
	
	
	FRASE();
	A=getche();
	printf("\n");
	FRASE();	
	B=getche();
	printf("\n");
	FRASE();	
	C=getche();
	printf("\n");
	FRASE();	
	D=getche();
	printf("\n");
	FRASE();	
	E=getche();
	printf("\n\n\n");
	
	printf("\n\n\t %c%c%c%c%c", A,B,C,D,E);	
	
}

 FRASE(){
	
	printf("INGRESE LA LETRA %d =",Letras);
	Letras++;
}
