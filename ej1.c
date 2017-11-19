#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 16

struct fecha{
	int dia;
	int mes;
	int anio;
};

struct jugadores{
	char nombre[20];
	char sexo;
	struct fecha nacimiento;
	char categoria[20];
};

void cargar(struct jugadores[],int);
struct fecha cargarfecha();
void mostrar(struct jugadores[],int);
void ordenar(struct jugadores[],int);
void categoria(struct jugadores[],int);

int main(){
	
	struct jugadores dato[N];
	//struct fecha fechaT;
	srand(time(NULL));
	cargar(dato,N);
    categoria(dato,N);;
	printf("\n\t\tDATOS INGRESADOS");
	mostrar(dato,N);
	ordenar(dato,N);
	printf("\n\n\t\tDATOS ORDENADOS");
	mostrar(dato,N);

}

//CARGAR AÑO DESDE 2005 HASTA 2009
void cargar(struct jugadores V[],int num){
	int i;
	char nombres[][10]={"PEPE","PIPO","LOLA","LOLO","COCO","KIKE","LILO",
	                   "COCA","LILA","LILO","KIKI","JUAN","PABLO","MELI"};
	for(i=0;i<num;i++){
		
		strcpy(V[i].nombre,nombres[rand()%13]);
		V[i].sexo=rand()%2?'M':'F';
		//printf("\nINGRESE EL NOMBRE= ");
		//gets(V[i].nombre);
		//printf("INGRESE EL SEXO= ");
		//V[i].sexo=getchar();
		V[i].nacimiento=cargarfecha();
		//fflush(stdin);
		
	}
}

void mostrar(struct jugadores V[],int num){
	int i;
	printf("\n%-10s %-10s %-4s %10s","NOMBRE","CATEGORIA","SEXO","NACIMIENTO\n");
	for(i=0;i<num;i++)
	   printf("\n%-10s %-10s %-4c %02d:%02d:%04d",V[i].nombre,V[i].categoria,
	   V[i].sexo,V[i].nacimiento.dia,V[i].nacimiento.mes,V[i].nacimiento.anio);
}

void ordenar(struct jugadores V[],int num){
	struct jugadores aux; int i,j;
	for(i=0;i<num-1;i++)
	    for(j=0;j<num-i-1;j++)
	         // if(strcmp(V[j].categoria,V[j+1].categoria)>0){
			  
	          if(V[j].nacimiento.anio>V[j+1].nacimiento.anio){
	    	//if(strcmp(V[j].sexo,V[j+1].sexo)>0){
		//	||strcmp(V[j].sexo,V[j+1].sexo)==0&&strcmp(V[j].categoria,V[j+1].categoria)>0){
	    		aux=V[j];
	    		V[j]=V[j+1];
	    		V[j+1]=aux;
			}
		
	
	
}

void categoria(struct jugadores V[],int num){
	int i;
	for(i=0;i<num;i++){
	    if(V[i].nacimiento.anio<=2005)
	       strcpy(V[i].categoria,"JUVENILES");
	    if(V[i].nacimiento.anio==2006)
	       strcpy(V[i].categoria,"CADETES");
	    if(V[i].nacimiento.anio>=2007)
	       strcpy(V[i].categoria,"INFANTILES");
    }
}




struct fecha cargarfecha(){
	struct fecha nueva;
	nueva.dia=1+rand()%30;
	nueva.mes=1+rand()%12;
	nueva.anio=2005+rand()%4;
	/*
	printf("INGRESE DIA= ");
	scanf("%d",&nueva.dia);
	printf("INGRESE MES= ");
	scanf("%d",&nueva.mes);
	printf("INGRESE ANIO= ");
	scanf("%d",&nueva.anio);
	*/
	return nueva;	
}
