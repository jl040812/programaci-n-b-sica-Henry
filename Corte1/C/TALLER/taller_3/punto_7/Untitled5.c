#include<stdio.h>

int main(){
	int nota;
	char nuevo;
	
	do{
		printf("Digite la nota:\n");
		scanf(" %d", &nota);
		
		if(0<=nota && nota<5){
			printf("Suspenso");
		}// && sirve para determinar rangos
		else if(5<=nota && nota<7){
			printf("Aprobado");
		}
		else if(7<=nota && nota<9){
			printf("Notable");
		}
		else if(nota==9){
			printf("Sobresaliente");
		}
		else if(nota==10){
			printf("Matricula de honor");
		}				
		printf("\nQuieres revisar otra nota: s/n\n");
		scanf(" %c", &nuevo);
		
	}while(nuevo=='s'||nuevo=='s');
}