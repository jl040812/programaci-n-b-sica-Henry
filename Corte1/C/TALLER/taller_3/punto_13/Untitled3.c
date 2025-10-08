#include <stdio.h>

int main() {
    int lista, suma = 0, contador = 0;
	char numero;
	
	do{
    printf("Digite numeros positivos (un negativo para terminar):\n");
    do {
        scanf("%d", &lista);
        if (lista >= 0) {
           suma=suma+lista;
           contador++;
        }
    } while (lista >= 0);

    if (contador > 0){
        printf("Promedio = %f\n", (float)suma / contador);
	}
    else {
    	printf("No se ingresaron numeros validos\n");
	}
	printf(" Quieres generar otro promedio: s /n\n");
	scanf(" %c", &numero);
	}
	while( numero == 's' || numero == 's' );
}
