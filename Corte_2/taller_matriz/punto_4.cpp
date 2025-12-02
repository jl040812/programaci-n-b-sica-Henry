#include<stdio.h>
int main(){
	char G;
	do{
		int N;
		float entradaN;
		do{
			printf("Digita el tamanio de la matriz:\n");
			scanf(" %f", &entradaN);
			if(entradaN!=(int)entradaN){
				printf("El dato es decimal\n");	
			}
			else if((int)entradaN<2){
				printf("El valor debe ser mayor que 1\n");
			}
			else{
				N=(int)entradaN;
				printf("El dato es valido\n");
				break;
			}
		}while(1);

		float M1[N][N];
		int i, j; //i filas j columnas
		float V[N];
		float MAX;
		int  CMF=0;
		float SMF=0, MMF=0;
		
		//ingresar datos
		for(j=0; j<N; j++){
			for(i=0; i<N; i++){
					printf("Digite el valor para la matriz[%d][%d]:\t", j, i);
					scanf(" %f", &M1[j][i]);
			}			
		}
		
		//imprimir datos
		for(j=0; j<N; j++){
			for(i=0; i<N; i++){
					printf("%.2f ", M1[j][i]);
			}
			printf("\n");	
		}
		
		//obtener MAX
		for(j=0; j<N; j++){
			MAX= M1[j][0];
			for(i=0; i<N; i++){
				if(M1[j][i]>MAX){
					MAX=M1[j][i];
				}
			}
			V[j] = MAX;
		}
		
		//IMPRESION DEL MAXIMO POR FILA
		for(j = 0; j < N; j++){
			printf("%.2f\n", V[j]);
		}
		printf("\n");
		
		//SUMA DE LOS MAXIMOS
		for(j = 0; j < N; j++){
			SMF=SMF+V[j];
			CMF++;
		}
		MMF=(float)SMF/CMF;
		printf("La media de los numeros maximos: %.2f", MMF);
		
		printf("\nQuieres generar otra matriz: S/N\n");
		scanf(" %c", &G);
		while((G!='S'&&G!='N') && ( G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}		
	}while(G=='S'||G=='s');
}