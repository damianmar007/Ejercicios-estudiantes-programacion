#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 20

struct persona{
	char nombre[10];
	int dni;
	int dnimadre;
	int dnipadre;
	int hijos;
};

void cargar(struct persona[],int);
void mostrar(struct persona[],int);
void sinhijos(struct persona[],int);
void mostrar2(struct persona[],int);


int main(){
	struct persona datos[N];
	srand(time(NULL));
	cargar(datos,N);
	printf("\n\t\tDATOS CARGADOS\n");
	mostrar(datos,N);
	sinhijos(datos,N);
	printf("\n\t\tDATOS SIN HIJOS ORDENADOS\n");
	mostrar2(datos,N);
}

void cargar(struct persona V[],int num){
	int i;
	char nombres[][10]={"LOLO","ANA","COCO","KIKE","BEBA",
	                    "PIPA","PEPE","CUCA","LORE","JUAN"};
	for(i=0;i<num;i++){
		/*
		printf("NOMBRE= ");
		fflush(stdin);
		gets(V[i].nombre);
		printf("DNI= ");
		fflush(stdin);
		scanf("%d",&V[i].dni);
		printf("DNI MADRE= ");
		fflush(stdin);
		scanf("%d",&V[i].dnimadre);
		printf("DNI PADRE= ");
		fflush(stdin);
		scanf("%d",&V[i].dnipadre);
		*/
		strcpy(V[i].nombre,nombres[rand()%9]);
		V[i].dni=30000000+rand()%1000000;
		V[i].dnimadre=2000000+rand()%1000000;
		V[i].dnipadre=20000000+rand()%1000000;	
		V[i].hijos=rand()%3;
	}
}

void mostrar(struct persona V[],int num){
	int i;
	printf("\n %-8s %-8s %-8s %-8s %-5s","NOMBRE","DNI",
	        "DNIPADRE","DNIMADRE","HIJOS");
	for(i=0;i<num;i++)
	    printf("\n %-8s %-08d %-08d %-08d %-02d",V[i].nombre,
		       V[i].dni,V[i].dnimadre,V[i].dnipadre,V[i].hijos);
}

void sinhijos(struct persona V[],int num){
	int j,k;
	struct persona aux;
	printf("\n\n");
	//for(i=0;i<num;i++)
	  //  if(V[i].hijos==0)
	    	for(j=0;j<num-1;j++)
	    	    for(k=0;k<num-j-1;k++)
	    	    	if(V[k].hijos>V[k+1].hijos||V[k].hijos==V[k+1].hijos&&
					strcmp(V[k].nombre,V[k+1].nombre)>0){
	    	    		aux=V[k];
	    	    		V[k]=V[k+1];
	    	    		V[k+1]=aux;
					}
//	mostrar(V,num);
}

void mostrar2(struct persona V[],int num){
	int i;
	printf("\n %-8s %-8s %-8s %-8s %-5s","NOMBRE","DNI",
	        "DNIPADRE","DNIMADRE","HIJOS");
	for(i=0;i<num;i++)
	    if(V[i].hijos==0)
	        printf("\n %-8s %-08d %-08d %-08d %-02d",V[i].nombre,
		       V[i].dni,V[i].dnimadre,V[i].dnipadre,V[i].hijos);
}
