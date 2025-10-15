#include<stdio.h>


int main(){
	int opcion;
	float base, altura, radio, lado, lado1, Area, Perimetro;
	char continuar;
	do{
		
		printf ("Escoge una figura\n 1. circulo\n 2. rectangulo\n 3. cuadrado\n 4. triangulo\n");
		scanf (" %d", &opcion);
		
		switch(opcion){
			
			case 1: //circulo
				printf("radio:\n");
				scanf("%f", &radio);
				Area= 3.14159*radio*radio;
				Perimetro= 2*3.14159*radio;
				printf("El area es %f, el perimetro es %f", Area, Perimetro);
				break;
			
			case 2: //rectangulo
				printf("base, altura\n");
				scanf("%f %f", &base, &altura);
				Area= base*altura;
				Perimetro= 2*base+2*altura;
				printf("El area es %f, el perimetro es %f", Area, Perimetro);
				break;
			
			
			case 3: //cuadrado
				printf("lado\n");
				scanf("%f", &lado);
				Area= lado*lado;
				Perimetro= 4*lado;
				printf("El area es %f, el perimetro es %f", Area, Perimetro);
				break;
			
			case 4: //triangulo
				printf("base, altura, lado, lado1\n");
				scanf("%f %f %f %f", &base, &altura, &lado, &lado1);
				Area= (base*altura)/2;
				Perimetro= base+lado+lado1;
				printf("El area es %f, el perimetro es %f", Area, Perimetro);
				break;
			default:
				printf("Opcion no valida");
							
		}
		printf("\nDesea continuar otra figura?\n s/n");
		scanf (" %c", &continuar);
		
	} while(continuar == 's' || continuar == 'S');
	return 0;
	}