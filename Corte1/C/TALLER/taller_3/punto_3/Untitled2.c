#include<stdio.h>

int main(){
	char nombre_del_trabajador[20], continuar;
	int horas, valor, sueldo_bruto, retencion, sueldo_neto;
	
	do{
		printf("Digite nombre del trabajador\n");
		scanf(" %s", nombre_del_trabajador);
		printf("Digite horas trabajadas\n");
		scanf(" %d", &horas);
		printf("Digite valor de horas\n");
		scanf(" %d", &valor);
	
		sueldo_bruto= valor*horas;
		retencion= (sueldo_bruto*5)/100;
		sueldo_neto = sueldo_bruto - retencion;
	
		printf("Nombre del trabajador:%c \n sueldo bruto: %d\n retencion: %d\n sueldo neto: %d\n", nombre_del_trabajador, sueldo_bruto, retencion, sueldo_neto);
        printf(" Desea registrar otra persona? s/n:\n ");
        scanf(" %c", &continuar);		
	}while(continuar == 's' || continuar == 'S');
}