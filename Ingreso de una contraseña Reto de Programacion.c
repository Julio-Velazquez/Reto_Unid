#include <stdio.h>

int main(int argc, char *argv[]) {
	//Ingreso de contraseņa
	
	int valida = 897;			//Declaracion de variables
	int clave;
	
	do
	{
		printf("Dime tu contraseņa de acceso: ");
		scanf("%d", &clave);
		if (clave != valida) printf("Contraseņa incorrecta!\n"); 		//Si la clave no es 897 va a mostrar en pantalla el "No valida"
	} while(clave != valida);							
	printf("Bienvenido.\n");									//Si la clave es correcta motrara en pantalla aceptada y terminara el programa
	
	
	
	// Hola compaņeros del otro semestre o cuatri xd 
	return 0;
}

