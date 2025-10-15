#include <stdio.h>

int main() {
    int L, S, C;
    float P;
	char N;
	
	do{
		P=0;
		S=0;
		C=0;
    	printf("Digite numeros positivos (un negativo para terminar):\n");
		do {
    	    scanf("%d", &L);
    	    if (L >= 0) {
    	       S=S+L;
    	       C++;
    	    }
		} while (L >= 0);

    	if (C > 0){
    		P=(float)S/C;
    	    printf("Promedio = %f\n", P);
		}
    	else {
    		printf("No se ingresaron numeros validos\n");
		}
		printf(" Quieres generar otro promedio: s /n\n");
		scanf(" %c", &N);
	}
	while( N == 's' || N == 'S' );
}
