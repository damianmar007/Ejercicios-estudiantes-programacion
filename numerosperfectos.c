#include<stdio.h>
#define N 10000


int main(){
	
	int Num;
	int Div;
	int Acum;
	
	
	printf("LOS PRIMEROS 4 NUMEROS PERFECTOS");
	printf("\n________________________________");
	
	for(Num=1;Num<N;Num++){		
		
		for(Div=1;Div<Num;Div++){
			
			if(Num%Div==0){
				Acum=Acum+Div;
			}
						
		}
		
		if(Acum==Num){
				printf("\n\n\t\t%d",Num);
		}
		Acum=0;
		
				
	}
	
	
	
	
	
	
	
}
