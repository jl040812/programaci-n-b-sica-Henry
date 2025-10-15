#include<stdio.h>
int main(){
	int N, M, C1;
	char sacar;
	do{
		C1=0;
		printf("Digite 2 numeros(el primero debe ser mayor que el segundo):\n");
		scanf(" %d %d", &N, &M);
		if(M>N){
			printf("el primer valor debe ser mayor que el segundo\n");
			continue ;
		}
		for(int i=M; i<=N && C1<3; i++){
			if((i%2)==0){
				printf(" %d\n", i);
				C1++;
			}
		}
		if(C1<3){
				printf("No hay tres numeros pares entre %d y %d\n", N, M);	
			}

		printf("Quieres sacar otros numeros pares: s/n \n");
		scanf(" %c", &sacar);
	}while( sacar == 's'|| sacar == 'S');
}