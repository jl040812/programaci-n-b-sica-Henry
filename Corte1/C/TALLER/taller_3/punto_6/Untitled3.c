#include<stdio.h>
int main(){
	int a, b, c, max, min;
	char nuevo;
	do{
		printf("Digite 3 numeros\n");
		scanf(" %d %d %d", &a, &b, &c);
		max=a;
		min=a;
		if (b>max){
			max=b;
		}
		if (c>max){
			max=c;
		}
		if (b<min){
			min=b;
		}
		if (c<min){
			min=c;
		}
	printf("Su valor maximo es: %d\n Su valor minimo: %d\n", max, min);	
	printf("\nQuieres revisar otros numeros: s/n\n");
	scanf(" %c", &nuevo);
	}while(nuevo=='s'||nuevo=='S');
}