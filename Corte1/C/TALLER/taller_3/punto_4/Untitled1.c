#include<stdio.h>

int main(){
	int A, B;
	char continuar;
	do{
		printf("Digite 2 numeros\n");
		scanf(" %d %d", &A, &B);
	
		if(A>B)	
				printf("El numero mayor es %d\n", A);
				
		else if (A<B)
				printf("El numero mayor es %d\n", B);
			
		else
				printf("Los numeros son iguales\n");
				
	printf("Desea comparar otros numeros? s/n\n");
	scanf (" %c", &continuar);
				
	}while (continuar=='s'||continuar=='s');


} 
