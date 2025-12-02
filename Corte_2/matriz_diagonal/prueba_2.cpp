//MATRIZ DIAGONAL VERIFICADA
#include<stdio.h>
int main(){
	char G;
	do{
		//i filas j columnas
		int N;
		float entrada;	
		int i,j;
		
		//revision del tamaño de matriz
		do {
			printf("Digite el tamanio de la matriz:\t");
			scanf("%f", &entrada);
			
        	// Verificar si tiene decimales o no
        	if (entrada != (int)entrada) {
        		printf("El dato ingrsado tiene decimales\n");
    		}
    		else if(entrada<2){
    			printf("Menor que 2\n");
			}
			else if(entrada>50){
				printf("Mayor que 50\n");
			}
			else {
        	    N = (int)entrada;
        	    break;
        	}
		}while (1);
		
		float M1[N][N];
		float M2[N][N];
		float M3[N][N];
		
		//ingreso de datos
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				printf("Digite el dato para la posicion de %d %d\n", i, j);
				scanf(" %f", &M1[i][j]);
			}
		}
		//impresion de datos
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				printf("%.2f	", M1[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		//modificacion de datos
		for(i=0; i<N; i++){ 
			for(j=0; j<N; j++){
				if (i==j){
					M2[i][j]=0;
				}
				else{
					M2[i][j]=M1[i][j];
				}
			}
		}
		//impresion de datos
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				printf("%.2f	", M2[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		//suma de datos
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
					M3[i][j]=M2[i][j]+M2[j][i];
			}
		}
		//impresion de suma
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				if( j>i ){
					M3[i][j]=0;
					printf("%.2f\t", M3[i][j]);
				}
				else{
					printf("%.2f\t", M3[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");	
		printf("\nQuiere ejecutar el programa otra vez: s/n\n");
		scanf(" %c", &G);
		while ((G!='S' && G!='N')&&(G!='s' && G!='n')){
			printf("\nNo se reconoce esa orden: s/n\n");
			scanf(" %c", &G);			
		}
	}while(G=='S'||G=='s');
}