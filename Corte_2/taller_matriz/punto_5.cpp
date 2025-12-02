
//punto 5
#include<stdio.h>
int main(){
	char G;
	do{
		float entrada;
		int N;
		do{
		printf("Digite el tamanio de la matriz:\n");
		scanf(" %f", &entrada);
		
			if( entrada!=(int)entrada ){
				printf("El dato ingresado tiene decimales\nDebe ser tipo entero\n");
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
		
		float M1[N][N];
		int F, C;
		float MAX;
		float V[N];
		
		//introcucion de datos
		for(C=0; C<N; C++){
			for(F=0; F<N; F++){
				printf("Digite los elementos de la matriz en posicion %d %d\n", C, F);
				scanf (" %f", &M1[C][F]);
			}
		}
		
		//revision del valor maximo
		for(C=0; C<N; C++){
			MAX=M1[C][0];
			for(F=0; F<N; F++){
				if ( M1[C][F] > MAX){
					MAX=M1[C][F];
				}
			}
			V[C] = MAX;
		}
		
		//impresion de matriz
		for(C=0; C<N; C++){
			for(F=0; F<N; F++){
				printf("%.2f ", M1[C][F]);
			}
			printf("\n");
		}
		printf("\n");
		//IMPRESION DEL MAXIMO POR FILA
		for(C = 0; C < N; C++){
			printf("%.2f ", V[C]);
		}

		printf(	"\nQuiere generar de nuevo el programa: S/N \n");
		scanf(" %c", &G);
		while ((G!='S' && G!='N')&&(G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}
	}while(G=='S'||G=='s');
}