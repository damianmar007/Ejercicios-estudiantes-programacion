#include<stdio.h>
POTENCIA(int,int);

int main(){
	
	int X; int Y; long int Res;
	
	printf("INGRESE UN NUMERO= ");
	scanf("%d",&X);
	printf("INGRESE LA POTENCIA= ");
	scanf("%d",&Y);
	
	Res=POTENCIA(X,Y);
	
	printf("RESULTADO= %d",Res);
}

int POTENCIA(int X, int Y){
	int I=0; long int Num;
	Num=X;	
	for(I=1;I<Y;I++)
	   // Num=Num*X;
	    Num=Num*X;
	return Num;    
}
