//revision del punto 3 perfecto
#include<stdio.h>
int main(){
	char G;
	do{
		float entrada;
		int N, i;
		do{
			printf("Digite la cantidad de elementos del vector:\n");
			scanf(" %f", &entrada);
			if( entrada!=(int)entrada){
				printf("El dato ingresado tiene decimales\nEl tamanio de la matriz debe ser un numero entero\n");
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
	
		float V1[N], V2[N], V3[N];
		
		//ingreso de datos vector 1
		for(i=0; i<N; i++){
			printf("Digite los elementos del vector 1 en posicion %d\n", i);
			scanf(" %f", &V1[i]);
		}
		
		//ingreso de datos vector 2 
		for(i=0; i<N; i++){
			printf("Digite los elementos del vector 2 en posicion %d\n", i);
			scanf(" %f", &V2[i]);
		}
		
		
		printf("Vector 1\n");
		//imprima vector 1
		for(i=0; i<N; i++){
			printf("%.2f ", V1[i]);
		}
		
		//imprima vector 2
		printf("\nVector 2\n");
		for(i=0; i<N; i++){
			printf("%.2f ", V2[i]);
		} 
		
		//imprima vector 3
		printf("\nVector 3\n");
		for(i=0; i<N; i++){
			V3[i]=V1[i]+V2[i];
			printf("%.2f ", V3[i]);
		}
		
		printf("\nQuiere generar de nuevo el programa: S/N \n");
		scanf(" %c", &G);
		while (( G!='S' && G!='N')&&( G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}
	}while(G=='S'||G=='s');
}