#include<stdio.h>
int main(){
	char G;
	do{
		int N;
		float entrada;
		
		//revision del tamaño de la matriz
		do{
			printf("Digite el tamanio del vector:\n");
			scanf(" %f", &entrada);			
			if (entrada !=(int)entrada){
				printf("El dato ingresado tiene decimales\nEl dato debe ser numero entero\n");
			}
			else if((int)entrada<2){
				printf("El dato debe ser mayor a 1\n");
			}
			else{
				N=(int)entrada;
				printf("El dato es valido\n");
				break;
			}
		}while(1);
		
		float V1[N];
		int V2[N];
		int i;
		
		//ingreso de datos
		for(i=0; i<N; i++){
			printf("Digite el elementos del vector:\n");
			scanf(" %f", &V1[i]);
			do{
				if( V1[i]!=(int)V1[i] ){
					printf("El dato es decimal\nEL dato debe ser tipo entero\n");
					scanf("%f", &V1[i]);
				}
				else{
					V2[i]=(int)V1[i];
					break;
				}
			}while(1);
			do{
				if(V2[i]%2==0){
					printf("Dato permitido// Es un numero par\n");
					break;
				}
				else {
					printf("Dato no permitido// No es un numero par\nIngrese un  numero par:\n");
					scanf (" %d", &V2[i]);
				}	
			}while(1);
		}
		
		//impresion del vector
		printf("Impresion del vector\n");
		for(i=0; i<N; i++){
			printf("%d ", V2[i]);
		}
		printf("\n");
		
		//impresion de numeros pares y posicion
		for(i=0; i<N; i++){
				printf("La posicion %d:	%d \n", i, V2[i]);
		}
		
		printf("Quiere generar otro vector: S/N \n");
		scanf(" %c", &G);
		while ((G!='S' && G!='N') && (G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}

	}while(G=='S'||G=='s');
}
