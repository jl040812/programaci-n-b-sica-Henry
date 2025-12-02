#include<stdio.h>
int main(){
	char G;
	do{
		int N, S=0;
		float entrada;
		
		//revision de tamaño de matriz
		do{		
			printf("Digita el tamanio de matriz:\t");
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

		float M[N][N];//MATRIZ
		int F, C; //F FILAS C COLUMNAS
		float VSC[N]; //VECTOR
		float VSF[N]; //VECTOR
		
		//INGRESO DE DATOS
		for(F=0; F<N; F++){
			for(C=0; C<N; C++){
				printf("Digite el valor de la matriz[%d][%d]\t", F, C);
				scanf(" %f", &M[F][C]);
			}			
		}
		
		//SUMA DE COLUMNAS
		for(C=0; C<N; C++){
			VSC[C]=0;
			for(F=0; F<N; F++){
				VSC[C]+=M[F][C];
			}
		}
		
		//SUMA DE FILAS
		for(F=0; F<N; F++){
			VSF[F]=0;
			for(C=0; C<N; C++){
				VSF[F]+=M[F][C];
			}
		}
		
		//IMPRESION DE DATOS CON SUMA DE FILAS
		for(F=0; F<N; F++){
			for(C=0; C<N; C++){
				printf("%.2f ", M[F][C]);
			}
			printf("\t=%.2f\n", VSF[F]);
		}
		
		//IMPRESION DE SUMA DE COLUMNAS
		for(C=0; C<N; C++){ 
			printf("%.2f ", VSC[C]);
		}
		
		printf("\nQuiere generar otra matriz: S/N\n");
		scanf(" %c", &G);
		while((G!='S'&&G!='N') && ( G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}
	}while(G=='S'||G=='s');
}