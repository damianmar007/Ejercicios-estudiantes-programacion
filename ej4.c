#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 4

struct alumnos{
	char nombre[20];
	char sexo;
	int notas[10];
//	float prom;
};

void cargar(struct alumnos[],int);
void mostrar(struct alumnos[],int);
void buscar(struct alumnos[],int);
void ordenar(struct alumnos[],int);
void promedio(struct alumnos[],int);
//void mostrarprom(struct alumnos[],int);




int main(){
	srand(time(NULL));
	struct alumnos dato[N];
	cargar(dato,N);
	printf("\n\t\t DATOS INGRESADOS");
	mostrar(dato,N);

	ordenar(dato,N);
	printf("\n\n\t\t DATOS ORDENADOS");
	mostrar(dato,N);
	promedio(dato,N);
//	printf("\n\n\t\t PROMEDIOS");
	//mostrarprom(dato,N);
	
	buscar(dato,N);
}

void cargar(struct alumnos V[],int num){
	int i,j;
	//char nombres[][10]={"PEPE","LOLO","PEPE","COCO","CUCA","PILA"};
	//char sex[]={'M','M'}
	for(i=0;i<num;i++){
		
		printf("\n NOMBRE= ");
		fflush(stdin);
		gets(V[i].nombre);
        printf("\n SEXO= ");
        fflush(stdin);
        V[i].sexo=getchar();
        
		
	//	strcpy(V[i].nombre,nombres[rand()%6]);
		
		for(j=0;j<10;j++)
		    V[i].notas[j]=rand()%10;
	}
}

void mostrar(struct alumnos V[],int num){
	int i,j;
	printf("\n%-10s %-4s %-4s %-4s %-4s %-4s %-4s %-4s %-4s %-4s %-4s %-4s","NOMBRE","MAT",
	       "FIS","QUI","ECO","ALG","INF","LEG","TEC","RED","PRO","SEXO");
	for(i=0;i<num;i++){
	    printf("\n%-10s ",V[i].nombre);
	    for(j=0;j<10;j++)
	        printf("%-4d ",V[i].notas[j]);
	    printf("%-4c",V[i].sexo);
    }
	   	
}

void buscar(struct alumnos V[],int num){
	int i,j;
	char x[10];
	printf("\n\nMATERIA A BUSCAR= ");
	gets(x);
	char mat[][10]={"MAT","FIS","QUI","ECO","ALG","INF","LEG","TEC","RED","PRO"};
	for(j=0;j<10;j++){
		     if(strcmp(mat[j],x)==0){
			 
		        for(i=0;i<num;i++){
		             if(V[i].notas[j]<4)
		             printf("\n%10s",V[i].nombre);
		        }
		}
	}
}

void ordenar(struct alumnos V[],int num){
	struct alumnos aux;
	int i,j;
	for(i=0;i<num-1;i++)
	    for(j=0;j<num-i-1;j++){
	    	if(V[j].sexo<V[j+1].sexo||V[j].sexo==V[j+1].sexo&&(strcmp(V[j].nombre,V[j+1].nombre)>0)){
	    	   aux=V[j];
	    	   V[j]=V[j+1];
	    	   V[j+1]=aux;
	        }
		}
}


void promedio(struct alumnos V[],int num){
	int i,j;
	int suma=0;
	float prom=0;
	float pr[10];
	for(i=0;i<num;i++){
	    for(j=0;j<10;j++)
	    	suma=suma+V[i].notas[j];
	    prom=suma/10;
	    pr[i]=prom;
     	//V[i].prom=prom;
	    suma=0;
    }
	printf("\n\n %-10s %-10s","NOMBRE","PROMEDIO");
	for(i=0;i<num;i++)
	    printf("\n%-10s %.2f ",V[i].nombre,pr[i]);	  		
}
/*
void mostrarprom(struct alumnos V[],int num){
	int i,j;
	printf("\n%-10s %-10s","NOMBRE","PROMEDIO");
	for(i=0;i<num;i++)
	    printf("\n%-10s %-.2f ",V[i].nombre,V[i].prom);	   	
}
*/

