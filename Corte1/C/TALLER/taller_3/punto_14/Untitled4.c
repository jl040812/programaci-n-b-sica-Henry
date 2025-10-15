#include<stdio.h>

int main (){
	int num_pos = 0, num_nega = 0, L_num;
	char R;
	do{
		int num_pos = 0, num_nega = 0;
		printf("Digite una lista de numeros (para terminar 0)\n");
		do{
			scanf(" %d", &L_num);
			if(L_num > 0){
				num_pos++;
			}
			else if (L_num < 0){
				num_nega++;
			}
		}while(L_num != 0);
		printf("Cantidad de numeros positivos: %d\n Cantidad de numeros negativos: %d\n", num_pos, num_nega);
		printf("Quieres revisar otros numeros: s/n\n");
		scanf(" %c", &R);
	}while( R == 's'|| R == 'S');
}