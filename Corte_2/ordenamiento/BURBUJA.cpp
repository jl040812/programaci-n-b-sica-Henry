#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int revisionnumero(){
		int N;
		float entrada;	
		do {
			printf("Digite el tamanio de la vector:\t");
			scanf("%f", &entrada);
			
        	// Verificar si tiene decimales o no
        	if (entrada != (int)entrada) {
        		printf("El dato ingrsado tiene decimales\n");
    		}
    		else if((int)entrada<2){
    			printf("No se puede generar una vector de ese tamanio");
			}
			else {
        	    N = (int)entrada;
        	    break;
        	}
		}while (1);
	return N;
}
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {              // FOR EXTERNO
        for (j = 0; j < n - i - 1; j++) {      // FOR INTERNO
            if (arr[j] > arr[j + 1]) {         // CONDICIÓN DE INTERCAMBIO
                temp = arr[j];                 // INTERCAMBIO
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

int main() {
	char G;
	do{
		srand(time(NULL));
		int N=revisionnumero();
		int arr[N];
		for(int i=0; i<N; i++){
			arr[i]= rand() %100;
		}
		printf("Tamanio del arreglo: %d\n", N);

	    printf("Arreglo original:\n");
	    printArray(arr, N);

	    bubbleSort(arr, N);

	    printf("Arreglo ordenado:\n");
	    printArray(arr, N);
		while ((G!='S' && G!='N')&&(G!='s' && G!='n')){
			printf("\nNo se reconoce esa orden: s/n\n");
			scanf(" %c", &G);			
		}
	}while(G=='S'||G=='s');
    return 0;
}