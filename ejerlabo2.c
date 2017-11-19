#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Num 8
void CARGAR (int[],char[],float[],int,char[][20]);
void MIRAR (int[],char[],float[],int,char[][20]);
void ORDENAR (int[],char[],float[],int,char[][20]);
void BUSCAR(int[],char[],float[],int,char[][20]);
void MPF (int[],char[],float[],int);
void MPM (int[],char[],float[],int);


int main (){
	
	int Leg[Num];
	char Sex[Num];
	float Prom[Num];
	char Nom[Num][20];
	
	
	srand(8);
	
	CARGAR(Leg,Sex,Prom,Num,Nom);
	printf("\n\t\tORDEN ORIGINAL");
	MIRAR(Leg,Sex,Prom,Num,Nom);
    ORDENAR(Leg,Sex,Prom,Num,Nom);
    printf("\n\n\t\tORDENADO POR SEXO Y PROMEDIO");
	MIRAR(Leg,Sex,Prom,Num,Nom);
	ORDENARALFA(Leg,Sex,Prom,Num,Nom);
	printf("\n\n\t\tORDEN ALFABETICO");
	MIRAR(Leg,Sex,Prom,Num,Nom);
    MPF(Leg,Sex,Prom,Num);
	MPM(Leg,Sex,Prom,Num);
	BUSCAR(Leg,Sex,Prom,Num,Nom);
}



void CARGAR(int L[],char S[],float P[],int N,char Nom[][20]){
	int i;
	char nombre [][20]={"ANA","PAULA","PEPE","COCO","KIKE","KUKY","PABLO","MARCO"};
	for(i=0;i<N;i++){
		L[i]=100+rand()%200;
		S[i]=rand()%2?'M':'F';
		P[i] = ( 200 + rand()%(801) )  / 100.0 ;
		strcpy(Nom[i],nombre[i]);
		//strcpy(Nom[i],nombre[rand()%6]);
	//	printf("NOMBRE= ");
	//	gets(Nom[i]);
		/*
		printf("\n\nLEGAJO= ");
		scanf("%d",&L[i]);
		fflush(stdin);
		printf("\nSEXO= ");
		scanf("%c",&S[i]);
		printf("\nPROMEDIO= ");
		scanf("%f",&P[i]);
		*/
		}
}

void MIRAR(int L[],char S[],float P[],int N,char Nom[][20]){
	int i;
	printf("\n\n%10s %10s %10s %10s","NOMBRE","LEGAJO","SEXO","PROMEDIO");
	for(i=0;i<N;i++)
	    printf("\n%10s %10d %10c %10.2f",Nom[i],L[i],S[i],P[i]);
}

void ORDENAR(int L[],char S[],float P[],int N,char Nom[][20]){
	int i,j;int Laux;char Saux;float Paux;char Nomaux[N];
	for(i=0;i<N-1;i++)
	    for(j=0;j<N-i-1;j++)
	    	if(S[j]<S[j+1]||S[j]==S[j+1]&&P[j]<P[j+1]){
	    		Paux=P[j];
	    		P[j]=P[j+1];
	    		P[j+1]=Paux;
	    		Saux=S[j];
	    		S[j]=S[j+1];
	    		S[j+1]=Saux;
	    		Laux=L[j];
	    		L[j]=L[j+1];
	    		L[j+1]=Laux;
	    		strcpy(Nomaux,Nom[j]);
	    		strcpy(Nom[j],Nom[j+1]);
	    		strcpy(Nom[j+1],Nomaux);
	    	}
}

void MPF(int L[],char S[],float P[],int N){
	int i;float mp=0;
	for(i=0;i<N;i++)
	   if(S[i]=='F'&&P[i]>mp)
	      mp=P[i];
    printf("\n\n MEJOR PROMEDIO FEMENINO= %.2f",mp);	      
}

void MPM(int L[],char S[],float P[],int N){
	int i;float mp=0;
	for(i=0;i<N;i++)
	   if(S[i]=='M'&&P[i]>mp)
	      mp=P[i];
    printf("\n\n MEJOR PROMEDIO MASCULINO= %.2f",mp);     
}


void ORDENARALFA(int L[],char S[],float P[],int N,char Nom[][20]){
	int i,j;int Laux;char Saux;float Paux;char Nomaux[20];
	for(i=0;i<N-1;i++)
	    for(j=0;j<N-i-1;j++)
	    	if(strcmp(Nom[j],Nom[j+1])>0){
	    		Paux=P[j];
	    		P[j]=P[j+1];
	    		P[j+1]=Paux;
	    		Saux=S[j];
	    		S[j]=S[j+1];
	    		S[j+1]=Saux;
	    		Laux=L[j];
	    		L[j]=L[j+1];
	    		L[j+1]=Laux;
	    		strcpy(Nomaux,Nom[j]);
	    		strcpy(Nom[j],Nom[j+1]);
	    		strcpy(Nom[j+1],Nomaux);
	    	}
}


void BUSCAR(int L[],char S[],float P[],int N,char Nom[][20]){
	int i;
	char X[20];
	printf("\n\nINGRESE NOMBRE A BUSCAR= ");
	gets(X);
	for(i=0;i<N;i++)
	   if(strcmp(X,Nom[i])==0){
	   
	      printf("\n\n%10s %10s %10s %10s","NOMBRE","LEGAJO","SEXO","PROMEDIO");
	      printf("\n\n%10s %10d %10c %10.2f",Nom[i],L[i],S[i],P[i]);
	  }
}

