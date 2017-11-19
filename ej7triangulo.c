#include<stdio.h>

int main(){


int Cat;
int Cont=0;
int Cont2=0;
int Cont3=0;


printf("INGRESE EL TAMANIO DE LOS CATETOS= ");
scanf("%d",&Cat);
printf("\n\n");
Cont3=Cat-1;


for(Cont=0;Cont<Cat;Cont++){	
	
	while(Cont3>Cont){
         	printf(" ");
         	Cont3--;
		 } 
	
	for(Cont2=0;Cont2<=Cont;Cont2++){	  		    	 
	    	 
         
		                  
         printf("*");
         
		   
    }     	   		
		     
	    
    printf("\n");
	Cont3=Cat-1;    
}
	
	




}
