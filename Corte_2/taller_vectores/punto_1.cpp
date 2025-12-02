#include<stdio.h>
int main(){
	char G;
	do{
		int N;
		float entrada;
		
		//revision del tamaño del vector
		do{
			printf("Digita el tamanio del vector: \n");
			scanf(" %f", &entrada);
			//verficar si tiene decimal o no
			if( entrada!=(int)entrada ){
				printf("El dato ingresado tiene decimales\nEl dato debe ser un numero entero\n");
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
		
		float V[N];
		int C1=0, i;
		float S=0;
		float M=0;
		
		//Ingreso de datos
		for(i=0; i<N; i++){
			printf("Digite el dato del vector %d: ", i);
			scanf(" %f", &V[i]);	
		}
		printf("\n");
		
		//impresion del vector
		for(i=0; i<N; i++){ 
			printf("%.3f ", V[i]);
		}
		printf("\n");
		
		//suma de datos
		for(i=0; i<N; i++){
			S=S+V[i];
			C1++;
		}
		printf("\n");
		
		M=(float)S/C1;
		printf("La suma total del vector es:%.2f\nEl promedio del vector es: %.2f\n",S, M);
		printf("\nQuieres generar otro vector: S/N\n");
		scanf(" %c", &G);
		while (( G!='S' && G!='N' ) && ( G!='s' && G!='n' )){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}
	}while(G=='S'||G=='s');
}