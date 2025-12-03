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

// Busca la primera aparición de key en arr.
// Si la encuentra, devuelve el índice (0, 1, 2, ...)
// Si NO la encuentra, devuelve -1.
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {          // recorro el arreglo desde 0 hasta n-1
        if (arr[i] == key) {               // comparo el elemento actual con key
            return i;                      // lo encontré, retorno la posición
        }
    }
    return -1;                             // no lo encontré en ninguna posición
}

// Busca TODAS las apariciones de key en arr.
// Guarda los índices encontrados en el arreglo indices[].
// Devuelve cuántas veces encontró a key.
int linearSearchAll(int arr[], int n, int key, int indices[]) {
    int count = 0;                         // cuántas veces lo he encontrado

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count] = i;            // guardo el índice donde lo encontré
            count++;                       // aumento el contador
        }
    }

    return count;                          // retorno cuántas veces apareció
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
    	printf("Arreglo: ");
    	for (int i = 0; i < N; i++) {
    	    printf("%d ", arr[i]);
    	}
    	printf("\n");

    	printf("Ingrese el numero a buscar: ");
	    scanf("%d", &key);
	
	    // --- Búsqueda de una sola posición (primera aparición) ---
	    int pos = linearSearch(arr, N, key);
	
   		if (pos == -1) {
    	    printf("El numero %d NO se encuentra en el arreglo.\n", key);
    	} else {
       		printf("El numero %d se encuentra (al menos) en la posicion %d (indice 0-based).\n",
       		key, pos);
   		}
	
    	// --- Búsqueda de todas las posiciones donde aparece key ---
    	int indices[100]; // arreglo para guardar posiciones (suficientemente grande para este ejemplo)
    	int count = linearSearchAll(arr, N, key, indices);
	
    	if (count == 0) {
    	    printf("No se encontraron ocurrencias de %d.\n", key);
    	} else {
        	printf("El numero %d aparece %d veces, en las posiciones: ", key, count);
        	for (int i = 0; i < count; i++) {
        	    printf("%d ", indices[i]);
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