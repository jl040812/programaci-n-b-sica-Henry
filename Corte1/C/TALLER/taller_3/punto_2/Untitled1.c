#include <stdio.h>

int main() {
    char producto[30], continuar;
    int unidades, precio, total;

    do {
        printf("Nombre del producto: \n");
        scanf(" %s", producto);
        printf("Precio por unidad: ");
        scanf(" %d", &precio);
        printf("Numero de unidades: ");
        scanf(" %d", &unidades);

        total = precio * unidades;

        printf(" Producto: %s\n Unidades: %d\n Total: %.d\n", producto, unidades, total);

        printf(" Desea registrar otra producto? s/n:\n ");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');

    
}
