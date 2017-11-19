#include<stdio.h>
#include<stdlib.h>
#define NUM 100

int DADO(int[],int);
void MOSTRAR(int[],int);

int main (){
	
	int Vec[NUM];int i;
	int Caras[]={0,0,0,0,0,0};
	
	DADO(Vec,NUM);
	//MOSTRAR(Vec,NUM);
	printf("\n\n\n");
	
	for(i=0;i<NUM;i++){
		if(Vec[i]==1)
		   Caras[0]++;
		if(Vec[i]==2)
		   Caras[1]++;
		if(Vec[i]==3)
		   Caras[2]++;
		if(Vec[i]==4)
		   Caras[3]++; 
		if(Vec[i]==5)
		   Caras[4]++;
		if(Vec[i]==6)
		   Caras[5]++;
	}
	
	for(i=0;i<6;i++)
	    printf("\nCara %d = %d veces.",i+1,Caras[i]);
	
}



int DADO(int V[],int N){
	int i;
	for(i=0;i<N;i++)
	    V[i]=1+rand()%6;
}

void MOSTRAR(int V[],int N){
	int i;
	for(i=0;i<N;i++)
	    printf("%4d",V[i]);
}
