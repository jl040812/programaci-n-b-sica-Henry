#include<stdio.h>

int main(){
	char fecha;	
	int mes, dia;
	do{
		printf ("Digite fecha de cumpleanos\n");
		printf("Dia:\n");
		scanf(" %d", &dia);
		printf("Mes(numero del mes)\n");
		scanf(" %d", &mes);
		if((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12))  // determina el rango{
			if ((dia>=21 && mes ==3 ) || (dia<=20 && mes ==4 )){
				printf(" su signo zodiacal es Aries");
			}
			else if	((dia>=21 && mes ==4 ) || (dia<=20 && mes ==5 )){
				printf(" su signo zodiacal es Tauro");
			}
			else if	((dia>=21 && mes ==5 ) || (dia<=20 && mes ==6 )){
				printf(" su signo zodiacal es Geminis");
			}
			else if	((dia>=21 && mes ==6 ) || (dia<=20 && mes ==7 )){
				printf(" su signo zodiacal es Cancer");		
			}
			else if	((dia>=21 && mes ==7 ) || (dia<=22 && mes ==8 )){
				printf(" su signo zodiacal es Leo");	
			}
			else if	((dia>=23 && mes ==8 ) || (dia<=22 && mes ==9 )){
				printf(" su signo zodiacal es Virgo");		
			}
			else if	((dia>=23 && mes ==9 ) || (dia<=22 && mes ==10 )){
				printf(" su signo zodiacal es Libra");
			}
			else if	((dia>=23 && mes ==10 ) || (dia<=21 && mes ==11 )){
				printf(" su signo zodiacal es Escorpio");		
			}
			else if	((dia>=22 && mes ==11 ) || (dia<=21 && mes ==12 )){
				printf(" su signo zodiacal es Sagitario");
			}
			else if	((dia>=22 && mes ==12 ) || (dia<=19 && mes ==1 )){
			printf(" su signo zodiacal es Capricornio");
			}
			else if	((dia>=20 && mes ==1 ) || (dia<=18 && mes ==2 )){
			printf(" su signo zodiacal es Acuario");
			}
			else if	((dia>=19 && mes ==2 ) || (dia<=20 && mes ==3 )){
			printf(" su signo zodiacal es Piscis");	
			} 
		else {
			printf("digite un mes y un dia correctos");
		}
		printf("\nQuieres revisar otra fecha: s/n\n");
		scanf(" %c", &fecha);	
	} while (fecha == 's' || fecha == 'S');
}