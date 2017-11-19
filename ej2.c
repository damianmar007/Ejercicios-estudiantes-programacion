#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 16

struct jugadores {
	char nombre[10];
	char sexo;
	int handicap;
};


void cargar(struct jugadores[],int);
void mirar(struct jugadores[],int);
void ordenar(struct jugadores[],int);
void parejas(struct jugadores[],int);

int main(){
	
	srand(time(NULL));
	struct jugadores dato[N];
	cargar(dato,N);
	printf("\n\t\tDATOS INGRESADOS");
	mirar(dato,N);
	ordenar(dato,N);
	printf("\n\n\t\tDATOS ORDENADOS X SEXO Y HANDICAP");
	mirar(dato,N);
	printf("\n\n\t\tPAREJAS");
	parejas(dato,N);
	
}

void cargar(struct jugadores V[],int num){
	int i;
	char nombres[][10]={"PEPE","PIPO","LOLA","LOLO","COCO","KIKE","LILO",
	                    "COCA","LILA","LILO","KIKI","JUAN","PABLO","MELI"};
	for(i=0;i<num;i++){
		strcpy(V[i].nombre,nombres[rand()%13]);
		V[i].sexo=rand()%2?'M':'F';
		V[i].handicap=rand()%100;
		/*
		printf("\nING NOMBRE= ");
		gets(V[i].nombre);
		printf("ING SEXO= ");
		V[i].sexo=getchar();
		printf("ING HANDICAP= ");
		fflush(stdin);
		scanf("%d",&V[i].handicap);
		fflush(stdin);
		*/
	}
}

void mirar(struct jugadores V[],int num){
	int i;
	printf("\n\n%-10s %-4s %-4s","NOMBRE","SEXO","HAND\n");
	for(i=0;i<num;i++){
	printf("\n%-10s %-4c %-4d",V[i].nombre,V[i].sexo,V[i].handicap);
    }
}


void ordenar(struct jugadores V[],int num){
	int i,j; struct jugadores aux;
		for(i=0;i<num-1;i++)
	        for(j=0;j<num-i-1;j++){
	        	if(V[j].sexo<V[j+1].sexo || V[j].sexo==
				   V[j+1].sexo && V[j].handicap<V[j+1].handicap){
	        		aux=V[j];
	        		V[j]=V[j+1];
	        		V[j+1]=aux;
				}
			}
}

void parejas(struct jugadores V[],int num){
	int i,j; int max=0;
	j=num;
	for (i=0;i<num/2;i++,j--){
		printf("\n%-5s H=%02d y %-5s H=%02d TOTAL H=%03d ",V[i].nombre,V[i].handicap,
		       V[j-1].nombre,V[j-1].handicap,(V[i].handicap+ V[j-1].handicap));
	    if ((V[i].handicap+ V[j-1].handicap)>max)
	        max=(V[i].handicap+ V[j-1].handicap);
	}
	j=num;
	for (i=0;i<num/2;i++,j--)
	    if((V[i].handicap+V[j-1].handicap)==max)
	        printf("\nPAREJA MEJOR= %s y %s CON %d",V[i].nombre,V[j-1].nombre,max);
  
}
