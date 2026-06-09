#include <stdio.h>

int main(int argc, char *argv[]) {
	int diaSemana;
	printf("que día de la semana es? \n");
	scanf("%d", &diaSemana);
	
	if (diaSemana==1)
		printf("\nLunes");
		else if (diaSemana==2)
			printf("\nMartes");
		else if (diaSemana==3)
			printf("\nMiercoles");
		else if (diaSemana==4)
			printf("\nJueves");
		else if (diaSemana==5)
			printf("\nViernes");
		else if (diaSemana==6)			
			printf("\nSabaduki");
		else if (diaSemana == 7)
			printf("\nDomingou");
		else
			printf("\ndia totalmente inexistente u osvaldo");
		
	
	return 0;
}

