#include <stdio.h>

int main() {
	
	//IF / ELSE // elif
	//solicitamos datos
	int miNumero;
	printf ("proporciona un numero: \n");
		scanf("%d", &miNumero);
	//VERIFICAMOS 
	if (miNumero > 0) {
		printf("valor positivo: %d", miNumero);//si num mayor que cero
	}
	else if (miNumero <0) {
		printf("valor negativo: %d", miNumero);//si num menor que cero
	}
	else{
		printf("valor 0: %d", miNumero);//si num igual a 0
	}
	//las llaves me sirven porque queda mas prolijo. 
	return 0;
}

