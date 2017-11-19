#include<stdio.h>
#include<stdlib.h>



void CARGA(int[],int);
void MOSTRAR(int[],int);
void MOSTRARI(int[],int);
void ORDENA(int[],int);


int main(){
	
	int Vec[10]; int N=10;
	
	
	CARGA(Vec,N);
	printf("\n\n");
	printf("VECTOR CARGADO= ");		  
	MOSTRAR(Vec,N);
    printf("\n\n");	  
	printf("\nVECTOR INVERSA= ");	
	MOSTRARI(Vec,N);
	printf("\n\n");	  
	ORDENA(Vec,N);
	printf("\nVETOR ORDENADO= ");	
	MOSTRAR(Vec,N);
	printf("\n\n");	  
	
}

void CARGA(int V[],int N){
	int i;
	for(i=0;i<N;i++){
	    printf("INGRESE EL VALOR %d = ",i);
	    scanf("%d",&V[i]);
		}    
}

void MOSTRAR(int V[],int N){
	int i;
	for(i=0;i<N;i++){
	    printf("%4d",V[i]);
		}
  
}

void MOSTRARI(int V[],int N){
	int i;
	for(i=N-1;i>=0;i--){
	    printf("%4d",V[i]);
		}
		    
}

void ORDENA(int V[],int N){
	int i,j,aux;
	for(i=0;i<N;i++)
       	for(j=0;j<N;j++){
       		if(V[i]>V[j]){
       			aux=V[i];
       			V[i]=V[j];
       			V[j]=aux;
		    }	
		}
}
	
	


