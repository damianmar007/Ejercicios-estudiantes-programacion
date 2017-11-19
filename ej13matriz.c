#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int Matriz[8][8]; int i,j;
	srand(time(NULL));
	for(i=0;i<8;i++)
	   for(j=0;j<8;j++)
		    Matriz[i][j]=0;
		
	
	Matriz[rand()%8][rand()%8]=1;
	Matriz[rand()%8][rand()%8]=1;
	
	for(i=0;i<8;i++){
	
	    printf("\n");
	    for(j=0;j<8;j++)
	        printf("%4d",Matriz[i][j]);
	        
   }
}
