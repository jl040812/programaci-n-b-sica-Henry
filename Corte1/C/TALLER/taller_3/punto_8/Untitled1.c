#include<stdio.h>

int main (){
	int anio;
	char nuevo;
	do{
		printf("Digite el año\n");
		scanf(" %d", &anio);
	
		if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))// revisa el año es bisiesto (si el año dividido en 4 da residuo 0 es bisiesto o en 400) ! no en 100 y el porcentaje para revisar que el residuo es igual a la condición
		{ 
			printf(" %d es un año bisiesto\n", anio);
		}
		else {
			printf (" %d el año no es bisiesto\n", anio);
		}
		printf(" Quieres revisar otra año: s/n\n");
		scanf(" %c", &nuevo);
	}while(nuevo == 's'||nuevo == 's');
}
