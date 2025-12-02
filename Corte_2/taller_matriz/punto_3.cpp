#include<stdio.h>
int main(){
	char G;
	do{
		float entradaM, entradaN;
		int N, M;// M filas N columnas
		int i, j;//i filas j columnas
		
		printf("Digite el tamaño de la matriz\n");
		do{
			printf("Cantidad de filas:\n");
			scanf (" %f", &entradaM);
			if(entradaM!=(int)entradaM){
				printf("El valor tiene decimales\n");
			}
			else if((int)entradaM<2){
				printf("El dato debe ser mayor a 1\n");
			}
			else{
				M=(int)entradaM;
				printf("El dato es valido\n");
				break;
			}
		}while(1);
		
		do{
			printf("Cantidad de columnas:\n");
			scanf(" %f", &entradaN);
			if(entradaN!=(int)entradaN){
				printf("El valor tiene decimales\n");
			}
			else if((int)entradaN<2){
				printf("El valor debe ser mayor a 1\n");
			}
			else{
				N=(int)entradaN;
				printf("El dato es valido\n");
				break;
			}
		}while(1);	

		float MA[M][N];
		int  CT=0;
		float ST=0, MT=0;
		
		//INGRESAR VALORES
			for(i=0; i<N; i++){
				for(j=0; j<N; j++){
				printf("Diigte el valor para la matriz [%d][%d]", i, j);
				scanf(" %f", &MA[i][j]);
			}
		}
		
		//imprimir
		for(i=0; i<M; i++){
			for(j=0; j<N; j++){
				printf("%.2f ", MA[i][j]);
			}
			printf("\n");
		}
		
		//REVISAR VALOR MAX
		float MAX= MA[0][0];
		for(i=0; i<M; i++){
			for(j=0; j<N; j++){
				if(MA[i][j]>MAX){
					MAX=MA[i][j];
				}
			}
		}
		
		//REVISAR VALOR MIN
		float MIN= MA[0][0];
		for(i=0; i<M; i++){
			for(j=0; j<N; j++){
				if(MA[i][j]<MIN){
					MIN=MA[i][j];
				}
			}
		}
		
		//media total
		for(i=0; i<M; i++){
			for(j=0; j<N; j++){
				ST=ST+MA[i][j];
				CT++;
			}
		}
		MT=(float)ST/CT;
		
		printf("El valor maximo es: %.2f\nEl valor minimo es: %.2f\nLa media de la matriz es: %.2f\n", MAX, MIN, MT);
		printf("\nQuiere generar otra matriz: S/N\n");
		scanf(" %c", &G);
		while((G!='S'&&G!='N') && ( G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}		
	}while(G=='S'||G=='s');
}