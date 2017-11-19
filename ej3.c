#include<stdio.h>
#include<stdlib.h>

void CARGA(int[],int);
void MOSTRAR(int[],int);
int BUSCAR(int[],int,int);

int main(){
	
	int Vec[10]; int N=10; int B;
	
	
	CARGA(Vec,N);
	printf("\n\n");
	printf("VECTOR CARGADO RAMDON= ");		  
	MOSTRAR(Vec,N);
	printf("\n\n");
	printf("INGRESE VALOR A BUSCAR= ");	
    scanf("%d",&B);
    printf("\n\n");
    if(BUSCAR(Vec,N,B))
       printf("VALOR ENCONTRADO");
    else
	  printf("VALOR NO ESTA");   
	
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

int BUSCAR(int V[], int N, int X){
	int i;
	for(i=0;i<N;i++){
	    if(V[i]==X)
	       return 1;
	}
	return 0;
	       
}
