#include<stdio.h>

int main (){
	int num_pos = 0, num_nega = 0, lista_num;
	char revisar;
	do{
		int num_pos = 0, num_nega = 0;
		printf("Digite una lista numeros (para terminar 0)\n");
		
	do{
		scanf(" %d", &lista_num);
		if(lista_num > 0){
			num_pos++;
		}
		else if (lista_num < 0){
			num_nega++;
		}
	}while(lista_num != 0);
	
		printf("Cantidad de numeros positivos: %d\n", num_pos);
		printf("Cantidad de numeros negativos: %d\n", num_nega);
		printf("Quieres revisar otros numeros: s/n\n");
		scanf(" %c", &revisar);
	}while( revisar == 's'|| revisar == 's');
}