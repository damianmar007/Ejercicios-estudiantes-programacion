#include<stdio.h>
#define NC 10
int PROMEDIO(int[],int);

int main(){

    int Vec[NC], I; 
    
    for(I=0;I<NC;I++){
    	printf("INGRESE VALOR POSICION %d =",I);
    	scanf("%d",&Vec[I]);
	}
    
    printf("PROMEDIO= %d",PROMEDIO(Vec,NC)) ; 

}

int PROMEDIO(int V[],int N){
	int I, Suma=0, Prom=0;
	for(I=0;I<N;I++)
	    Suma=Suma+V[I];
	Prom=Suma/N;
	return Prom;   
	    
}



















