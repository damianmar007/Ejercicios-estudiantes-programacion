#include<stdio.h> 
#define NC 10

int main(){
	
	int I;
	int Vec[NC];
	
	for(I=0;I<NC;I++){
		printf("INGRESE VALOR POSICION %d = ",I);
		scanf("%d",&Vec[I]);
	}
	
	printf("\n\nORDEN DE INGRESO\n");
	for(I=0;I<NC;I++)
	    printf("%4d",Vec[I]);
	    
	printf("\n\nORDEN INVERSO\n");
	for(I=NC-1;I>=0;I--)
	    printf("%4d",Vec[I]);    
	    
	    
	return 0;    
	
	
}
