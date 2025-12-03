//selection sort
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

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;  // asumimos que el menor está en i

        // buscar el menor en el resto del arreglo
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // si encontramos un menor, intercambiamos
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
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


	    printf("Arreglo original:\n");
   		printArray(arr, N);

	    selectionSort(arr, N);

		printf("Arreglo ordenado:\n");
	    printArray(arr, N);


		printf("\nQuiere ejecutar el programa otra vez: s/n\n");
		scanf(" %c", &G);
		while ((G!='S' && G!='N')&&(G!='s' && G!='n')){
			printf("\nNo se reconoce esa orden: s/n\n");
			scanf(" %c", &G);			
		}
	}while(G=='S'||G=='s');
    return 0;
}