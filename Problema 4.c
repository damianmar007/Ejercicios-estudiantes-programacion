#include<stdio.h>

int main(){
	
	int Clave;
	int Cont=0;
	
	while(Clave!=23645){

        printf("INGRESE LA CLAVE DE 5 DIGITOS\n\n");
        scanf("%d", &Clave);
        Cont++;
        
		if(Clave!=23645){
			printf("\t\t\t CLAVE INCORRECTA\n\n");	 
		}else{
			printf("\t\t\t CLAVE CORRECTA!!!!");
		} 
		
		if(Cont>3){			
			printf("\t\t\t ADVERTENCIA!!!!");
			return 0;
		}      

	}
	
	//printf("\n\n\t\t\t CLAVE CORRECTA!!!!!!");
	
}
