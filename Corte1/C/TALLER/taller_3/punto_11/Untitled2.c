#include<stdio.h>
#include<string.h> //introduce strcmp compara cadenas de letra o numeros bota 0 si son iguales;Devuelve < 0 si clave es menor que correcta

//Devuelve > 0 si clave es mayor que correcta

int main(){
	char clave[30], contrasena[] = "a4j8m12", nuevo;
	// [] almacena contraseña y "" para meter contraseña

	do{
		int intentos = 0, restante;
		while(intentos< 3){
		
		printf("Digite clave:\n");
		scanf(" %s", clave);
		
		if (strcmp(clave, contrasena)==0)
		{
			printf("Su clave es correcta\n");
			return 0; //para salir del programa como un break en switch case
		}
		
		else {
			printf("Su clave es incorrecta\n");
			intentos++;
			
			if(intentos < 3){
				restante= 3-intentos;
                printf("Intentos restantes: %d\n", restante);
            }
		}
		}
	printf("Te quedaste sin intentos\n");
		printf("Quieres intentar otra vez: s/n\n");
		scanf(" %c", &nuevo);	
	}while( nuevo == 's' || nuevo == 's' );
}