#include<stdio.h>
PRIMO(int);
RANGOP(int,int);

int main(){
	int Min; int Max; int Res;
	printf("\nINGRESE EL RANGO MINIMO= ");
	scanf("%d",&Min);
	printf("\nINGRESE EL RANGO MAXIMO= ");
	scanf("%d",&Max);
	
	Res=RANGOP(Min,Max);
	
	printf("\nTOTAL DE NUMEROS PRIMOS DENTRO DEL RANGO= %d",Res);
	
	
}

int PRIMO(int Num){
	int Div;
	for(Div=2;Div<Num;Div++){
		if(Num%Div==0)
		   return 0;
	}
	return 1;
}

int RANGOP(int X,int Z){
	int I; int Cont=0;
	for(I=X;I<=Z;I++){
		if(PRIMO(I))
		   Cont++;
	}
	return Cont;
}
