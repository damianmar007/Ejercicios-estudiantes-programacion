#include<stdio.h>
#include<stdlib.h>

void CARGA(int[],int);
void MOSTRAR(int[],int);
int POSMIN(int[],int);
int POSMAX(int[],int);

int main(){
	srand(3);
	int Vec[10]; int N=10; int PMI, PMA;
	
	
	CARGA(Vec,N);
	printf("\n\n");
	printf("VECTOR CARGADO RAMDON= ");		  
	MOSTRAR(Vec,N);
	printf("\n\n");
	PMI=POSMIN(Vec,N);	
	PMA=POSMAX(Vec,N);
	printf("POSICION MINIMA= %d = %d",PMI,Vec[PMI]);	
    printf("\n\n");
    printf("POSICION MAXIMA= %d = %d",PMA,Vec[PMA]);
	
}

void CARGA(int V[],int N){
	int i;
	for(i=0;i<N;i++){
	    V[i]=rand()%99;
		}    
}

void MOSTRAR(int V[],int N){
	int i;
	for(i=0;i<N;i++){
	    printf("%4d",V[i]);
		}
  
}

int POSMIN(int V[], int N){
	int i, PM;
	PM=0;
	for(i=0;i<N;i++){
	    if(V[i]<V[PM])
	       PM=i;
   	}
   	return PM;    
}

int POSMAX(int V[], int N){
	int i, PM;
	PM=0;
	for(i=0;i<N;i++){
	    if(V[i]>V[PM])
	       PM=i;
    }
    return PM;   
}
