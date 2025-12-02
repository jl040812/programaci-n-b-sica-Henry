#include<stdio.h>
int main(){
	char G;
	do{
		
		float E_F, E_C;
		int N, M;//M filas N columnas
		int i, j;// i Columnas j filas
		int P_C=0;

		printf("Digite el tamanio de la matriz\n");
		//revision de fila 
		do{
			printf("Cantidad de filas:\n");
			scanf(" %f", &E_F);
			if(E_F!=(int)E_F){
				printf("El dato tiene decimales\nDebe ser tipo entero\n");
			}
			else if((int)E_F<2){
				printf("El dato debe ser mayor a 1\n");
			}
			else{
				M=(int)E_F;
				printf("Dato valido\n");
				break;
			}
		}while(1);

		//revision de columna
		do{	
			printf("Cantidad de columnas: \n");
			scanf(" %f", &E_C);
			if(E_C!=(int)E_C){
				printf("El dato ingresado tiene decimales\nDebe ser tipo entero\n");
			}
			else if((int)E_C<2){
				printf("El dato debe ser mayor a 1\n");
			}
			else{
				N=(int)E_C;
				printf("El dato es valido\n");
				break;
			}
		}while(1);

		float MA[M][N];
		
		//ingreso de datos en la matriz
		for(j=0; j<M; j++){
			for(i=0; i<N; i++){
				printf("Digite el valor para la matriz [%d][%d]:\n", j, i);
				scanf(" %f", &MA[j][i]);
			}		
		}
		
		//contador de pares
		for(j=0; j<M; j++){
			for(i=0; i<N; i++){
				if( MA[j][i]!=(int)MA[j][i] ){
					//El dato es decimal no puede ser un par
				}
				else{
					if((int)MA[j][i]%2==0){
						P_C++;
					}
				}		
			}	
		}
		
		//impresion de la matriz
		for(j=0; j<M; j++){
			for(i=0; i<N; i++){
				printf("%.2f ", MA[j][i]);
			}
			printf("\n");
		}
		
		printf("Cantidad de numeros pares en la matriz %d\n", P_C);
		printf("Quiere generar otra matriz: S/N\n");
		scanf(" %c", &G);
		while((G!='S'&&G!='N') && ( G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}
	}while(G=='S'||G=='s');
}