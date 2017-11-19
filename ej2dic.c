#include<stdio.h>
#define NC 10

int main(){

    int Vec[NC], I; 
    int Div, Acum=0;
    
    for(I=0;I<NC;I++){
    	printf("INGRESE VALOR POSICION %d =",I);
    	scanf("%d",&Vec[I]);
	}
    
    printf("\n\nINGRESE EL DIVISOR= ");
    scanf("%d",&Div);
    
    for(I=0;I<NC;I++)
        if(Vec[I]%Div==0)
           Acum++;
           
    printf("TOTAL=%d",Acum);       
    
    

}
