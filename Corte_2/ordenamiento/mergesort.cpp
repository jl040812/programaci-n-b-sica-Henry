//mergesort
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
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;  
    int n2 = r - m;      

    int L[n1];
    int R[n2];


    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
	}


    for (j = 0; j < n2; j++){
    	R[j] = arr[m + 1 + j];
	}
        

 
    i = 0;      // índice inicial de L[]
    j = 0;      // índice inicial de R[]
    k = l;      // índice inicial de arr[]

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copiar los elementos restantes de L[], si hay
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copiar los elementos restantes de R[], si hay
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// MergeSort recursivo
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // punto medio

        // ordenar primera y segunda mitad
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // mezclar las dos mitades ordenadas
        merge(arr, l, m, r);
    }
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
    	printf("Arreglo desordenado:\n");
	    for (int i = 0; i < N; i++){
    	    printf("%d ", arr[i]);
 		}
 		printf("\n");
		mergeSort(arr, 0, N - 1);

	    printf("Arreglo ordenado:\n");
	    for (int i = 0; i < N; i++){
    	    printf("%d ", arr[i]);
 		}
 		
		printf("\nQuiere ejecutar el programa otra vez: s/n\n");
		scanf(" %c", &G);
		while ((G!='S' && G!='N')&&(G!='s' && G!='n')){
			printf("\nNo se reconoce esa orden: s/n\n");
			scanf(" %c", &G);			
		}
	}while(G=='S'||G=='s');
    
	return 0;
    
}