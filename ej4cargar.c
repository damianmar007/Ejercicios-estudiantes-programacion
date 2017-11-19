#include<stdio.h>
#include<stdlib.h>
#define NC 10
voidCARGA(int[],int);

int main(){
    
    int I, Vec[NC];
    CARGA(Vec,NC);
    for(I=0;I<NC;I++)
	    printf("%4d",Vec[I]);
	return 0;
}

void CARGA(int V[],int N){
	int I;
	for(I=0;I<N;I++)
	    V[I]=rand()%99;
}


















