#include <stdio.h>

int main(int argc, char *argv[]) {
	//Ingreso de contrase�a
	
	int valida = 897;			//Declaracion de variables
	int clave;
	
	do
	{
		printf("Dime tu contrase�a de acceso: ");
		scanf("%d", &clave);
		if (clave != valida) printf("Contrase�a incorrecta!\n"); 		//Si la clave no es 897 va a mostrar en pantalla el "No valida"
	} while(clave != valida);							
	printf("Bienvenido.\n");									//Si la clave es correcta motrara en pantalla aceptada y terminara el programa
	
	
	
	// Hola compa�eros del otro semestre o cuatri xd 
	return 0;
}

