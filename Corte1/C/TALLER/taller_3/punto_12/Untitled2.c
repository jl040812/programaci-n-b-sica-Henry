#include<stdio.h>

int main (){
	int numero, i, producto = 0;
	char revisar;
	do{
		printf("Digite un numero\n");
		scanf(" %d", &numero);
		i = 0;
		while(i<=10){
			producto = numero * i;
			printf(" %d * %d = %d\n", numero, i, producto);
			i++;
			}
		printf("Quieres revisar otro numero: s/n\n");
		scanf(" %c", &revisar);
	} while( revisar == 's' || revisar == 'S');
}