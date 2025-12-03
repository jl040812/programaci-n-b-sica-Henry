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
// Versión modificada de búsqueda binaria para encontrar
// la PRIMERA aparición de key en un arreglo ORDENADO.
// Si la encuentra, devuelve el índice de la primera aparición.
// Si NO la encuentra, devuelve -1.
int firstOccurrence(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int result = -1;  // aquí guardaremos la mejor posición encontrada

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;        // encontramos una ocurrencia
            high = mid - 1;      // seguimos buscando MÁS A LA IZQUIERDA
        } else if (key < arr[mid]) {
            high = mid - 1;      // ir a la mitad izquierda
        } else {
            low = mid + 1;       // ir a la mitad derecha
        }
    }

    return result;
}

// Versión modificada de búsqueda binaria para encontrar
// la ÚLTIMA aparición de key en un arreglo ORDENADO.
// Si la encuentra, devuelve el índice de la última aparición.
// Si NO la encuentra, devuelve -1.
int lastOccurrence(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int result = -1;  // aquí guardaremos la mejor posición encontrada

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            result = mid;        // encontramos una ocurrencia
            low = mid + 1;       // seguimos buscando MÁS A LA DERECHA
        } else if (key < arr[mid]) {
            high = mid - 1;      // ir a la mitad izquierda
        } else {
            low = mid + 1;       // ir a la mitad derecha
        }
    }

    return result;
}
void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];      // valor que vamos a insertar
        j = i - 1;

        // mover los elementos mayores que key hacia la derecha
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // insertar la key en el hueco que quedó
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(void) {
	char G;
	do{
		srand(time(NULL));
		int N=revisionnumero();
		int arr[N];
		for(int i=0; i<N; i++){
			arr[i]= rand() %100;
		}

    	int key;

		printf("Arreglo original:\n");
		printArray(arr, N);

    	insertionSort(arr, N);

	    printf("Arreglo ordenado:\n");
    	printArray(arr, N);
    	printf("\n");

    	printf("Ingrese el numero a buscar: ");
    	scanf("%d", &key);

    	int first = firstOccurrence(arr, N, key);
    	int last  = lastOccurrence(arr, N, key);

    	if (first == -1) {
    	    printf("El numero %d NO se encuentra en el arreglo.\n", key);
    	} else {
    	    int count = last - first + 1;

    	    printf("El numero %d aparece %d veces.\n", key, count);
    	    printf("Posiciones (indices 0-based): ");

   		    for (int i = first; i <= last; i++) {
            printf("%d ", i);
     	   }
    	    printf("\n");
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