#include <stdio.h>

int main(int argc, char *argv[]) {
	//operadores de asignacion
	// operador = para asignar un valor
	int miNumero = 10;
	printf ("\nvalor de mi numero: %d", miNumero);
	//se puede sobreescribir
	miNumero = 20;
	printf ("\nnuevo valor de mi numero: %d", miNumero);
	//operador de +=
	miNumero += 5; //miNumero = miNumero + 5
	printf ("\n+=valor de mi numero: %d", miNumero);
	//operador -=
	miNumero -= 3;
	printf ("\nvalor de mi numero: %d", miNumero);
	//perador *=
	miNumero *= 2;
	printf ("\nvalor de mi numero: %d", miNumero);
	//operador /=
	miNumero /=7;
	printf ("\nvalor de mi numero: %d", miNumero);
	//residuo/modulo %=
	miNumero %= 2;
	printf ("\nvalor de mi numero: %d", miNumero);
	
	return 0;
}

