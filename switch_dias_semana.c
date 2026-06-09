#include <stdio.h>

int main(int argc, char *argv[]) {
	int diaSemana;
	printf("que día de la semana es del 1 al 7 siendo lunes 1? \n");
	scanf("%d", &diaSemana);
	
	switch (diaSemana){
		case 1:
			printf("\nLunes");
			break;
		case 2:
			printf("\nMartes");
			break;
		case 3:
			printf("\nMiercoles");
			break;
		case 4:
			printf("\nJueves");
			break;
		case 5:
			printf("\nViernes");
			break;
		case 6:
			printf("\nSabado");
			break;	
		case 7:
			printf("\nDomingo");
			break;
		default :
			printf("\nSon 7 dias nomas u_u");
	}//ending switch



	return 0;
}

