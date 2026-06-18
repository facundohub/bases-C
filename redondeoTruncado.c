#include <stdio.h>
#include <math.h>

//redondeo y truncado//

int main(int argc, char *argv[]) {
	
	//redondeo
	
	float numero = 8.5;
	
	int redondeo, truncado;
	
	redondeo = round(numero);
	
	printf("Valor redondeado de %.2f es = %d\n", numero, redondeo);
	
	//truncado
	
	truncado = trunc(numero);
	
	printf("Valor truncado %.2f es: %d\n", numero, truncado);
	
	return 0;
}

