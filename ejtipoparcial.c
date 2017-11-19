#include<stdio.h>

PRIMO(int);
POTENCIA(int);
MERSSENNE(int);


int main(){
	
	int Cont=0;
	
	printf("NUMERO PRIMO");	
	printf("\tSU MERSSENNE");
	printf("\tMERSSENNE ES PRIMO");
	
	for(Cont=2;Cont<=30;Cont++){
		
		if(PRIMO(Cont)){			
		printf("\n%d",Cont);
		printf("\t\t%-9d",MERSSENNE(Cont));
		if(PRIMO(MERSSENNE(Cont)))
		   printf("\t\tSI");
		   else
		   printf("\t\tNO");
	    }
	}
	
	
}


int PRIMO(int N){
	int Div;
	for(Div=2;Div<N;Div++){
		if(N%Div==0)
		  return 0;
	}
	return 1;
}


int POTENCIA(int N){
	int Cont=0;
	int Acum=2;
	for(Cont=1;Cont<N;Cont++){
		Acum=2*Acum;
	}
	return Acum;
}


int MERSSENNE(int N){
	int M;
	M=POTENCIA(N)-1;
	return M;
	
}
