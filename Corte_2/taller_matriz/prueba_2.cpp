//punto 2 finalizado corregido completo perfecto
#include<stdio.h>
int main(){
	char G;
	do{
		float entrada;
		int N;
		int i, j;//i filas j columnas
		
		//revision de la matriz
		do {
			printf("Digite el tamanio de la matriz");
			scanf(" %f", &entrada);
			if(entrada!=(int)entrada){
				printf("El dato tiene decimales\nEldato debe ser tipo entero\n");
			}
			else if((int)entrada<2){
				printf("El dato es menor que 2 no se puede generar la matriz\n");
			}
			else{
				N=(int)entrada;
				printf("El dato es valido\n");
				break;
			}
		}while(1);
			
		
		
		float M[N][N];
		
		int  C_P=0, CPP=0;
		int  C_I=0, CPI=0;	
		float S_I=0, S_P=0, SPP=0, SPI=0; 
		float M_I=0,  M_P=0, MPP=0, MPI=0;
		
		//ingresar datos
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				printf("Digite el valor para la matriz [%d][%d]\n", i, j);
				scanf(" %f", &M[i][j]);
			}
		}
		
		//suma de numeros pares e impares
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				if(M[i][j]!=(int)M[i][j]){
					//no se puede es decimal
				}
				else{	
					if( ((int)M[i][j])%2==0 ){
						S_P=S_P+M[i][j];
						C_P++;
					}
					else {
						S_I=S_I+M[i][j];
						C_I++;
					}
				}

			}
		}

		//suma de los numeros en posiciones pares
		for(i=0; i<N; i++){
			for(j=0; j<N; j++){
				if(i%2==0){
					SPP=SPP+M[i][j];
					CPP++;
				}
				else{
					SPI=SPI+M[i][j];
					CPI++;
				}
			}			
		}
		
		//impresion de la matriz
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%.2f ", M[i][j]);
			}
			printf("\n");
		}
	
		if(C_P<1){
			printf("La media de los numeros pares es 0\n");
		}
		else{
			M_P=(float)S_P/C_P;
			printf("La media de los numeros pares es: %.2f\n", M_P);
		}
		if(C_I<1){
			printf("La media de los numeros impares es 0\n");
		}
		else{
			M_I=(float)S_I/C_I;
			printf("La media de los numeros impares es: %.2f\n", M_I);
		}
		
		MPP=(float)SPP/CPP;
		MPI=(float)SPI/CPI;
		
		printf("La media de los numeros en posiciones pares %.2f\nLa media de los numeros en posiciones impares %.2f\n", MPP, MPI);
		printf("\nQuiere generar otra matriz: S/N\n");
		scanf(" %c", &G);
		while((G!='S'&&G!='N') && ( G!='s' && G!='n')){
			printf("No se reconoce esa orden\n");
			scanf(" %c", &G);
		}
	}while(G=='S'||G=='s');
}