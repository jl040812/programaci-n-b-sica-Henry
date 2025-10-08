#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int aciertos, numero, aleatorio;
	char juego;
	do{

			srand (time(NULL));
    		aleatorio = (rand() % 10) + 1;
			do{
				printf("Digite un numero del 1 al 10:\n");
				scanf (" %d", &numero);
    		    if (numero != aleatorio) {
    	        printf("No es correcto, intenta otra vez\n");
    	    	}
    		} while (numero != aleatorio);
		
		aciertos++;
		
    	printf("Correcto, el numero era %d.\n cantidad de aciertos:%d :", aleatorio, aciertos);
    	
	
	printf("\nQuieres jugar otra vez: s/n\n");
	scanf(" %c", &juego);
		
	}while(juego == 's' || juego == 's');
}

