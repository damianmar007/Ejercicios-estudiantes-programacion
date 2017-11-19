#include<stdio.h>

int main(){
	
	int Buzo[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int Punto[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int P=0; int i,j,baux,paux;
	
	while(P>=0){
		printf("BUZO PUNTO= ");  //del 1 al 15
		scanf("%d",&P);
		Punto[P-1]++;
	}
	
	for(i=0;i<15-1;i++)
	    for(j=0;j<15-i-1;j++){
	    	if(Punto[j]<Punto[j+1]){
	    		
	    		paux=Punto[j];
	    		Punto[j]=Punto[j+1];
	    		Punto[j+1]=paux;
	    		
	    		baux=Buzo[j];
	    		Buzo[j]=Buzo[j+1];
	    		Buzo[j+1]=baux;
	    	}
		}
		
	printf("\n\n%10s  %10s","BUZO","PUNTOS");
	for(i=0;i<15-1;i++)
	    printf("\n%10d  %10d",Buzo[i+1],Punto[i]);
	
	
}
