#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char juego;
	int valor, gana;
	srand(time(NULL));
	
	do{
		
		printf("Digite el valor de la apuesta\n");
		scanf(" %d", &valor);

		int resultado_moneda = (rand()%2)+1;
		
		switch (resultado_moneda)
		{
		case 1:
			gana= 2*valor;
			printf("Ganas %d", gana);
			break;
		case 2:
			printf("Perdiste todo");
			break;
		}

		
		printf("\nQuieres jugar de nuevo? s/n\n");
		scanf(" %c", &juego);
		
	} while(juego=='s'||juego=='s');
	
}