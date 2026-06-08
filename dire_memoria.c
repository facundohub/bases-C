#include <stdio.h>

int main() {
	//solicitar al usuario que proporcione un valor
	int miNumero = 50;
	printf("mi numero %d:", miNumero);
	printf("\ndireccion en memoria: %p", miNumero);
		//pedir dato a usuario
	printf("\nproporciona un numero: \n");
		//recuperar información que el usuario ingresó
		scanf("%d", &miNumero);
		
		printf("\nEl numero proporcionado es %d", miNumero);
		printf("direccion en memoria: %p", miNumero);
	return 0;
}

