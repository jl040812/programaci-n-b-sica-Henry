#include<stdio.h>
int main(){
	int N1, C1;
	char revisar;
	do{
		C1=0;
		printf("Digite un numero:\n");
		scanf(" %d", &N1);
		if (N1>1){
			for(int i=2; i<=N1; i++){
				if (N1%i==0){
					C1++;
				}
			}
			if(C1>1){
				printf("No es un numero primo\n"); 
				}
			else{
				printf("Es un numero primo\n");
			}
		}
		else{
			printf("no es un numero primo\n"); 
		}
		printf("Quieres revisar otro numero: s/n\n");
		scanf(" %c", &revisar);
	}while(revisar =='s'||revisar=='S');
}