#include<stdio.h>

struct video crearvideo();
void impvideo(struct video);

struct video{
	char titulo[20];
	int visitas;
	float tiempo;
};

int main (){
	
	struct video videoT;
	struct video V1,V2;
	V1=crearvideo();
	V2=crearvideo();
	
	impvideo(V1);
	impvideo(V2);
	
}


struct video crearvideo(){
	struct video nuevovideo;
	printf("INGRESE TITULO= ");
		fflush(stdin);
	gets(nuevovideo.titulo);
	printf("INGRESE VISITAS= ");
	fflush(stdin);
	scanf("%d",&nuevovideo.visitas);
	printf("INGRESE TIEMPO= ");
		fflush(stdin)
	scanf("%f",&nuevovideo.tiempo);
	return nuevovideo;	
}

void impvideo(struct video vid){
	printf("\nTITULO=%s \nVISITAS=%d \n TIEMPO=%f",
	       vid.titulo,vid.visitas,vid.tiempo);	
}
