#include <stdio.h>
#include <stdlib.h>
//numero a texto
int main(int argc, char *argv[]) {
	
	int edad = 28;
	char edadTexto[5];
	
	//se usa la funcion itoa -> int to ascii
	//el valor 10 que vamos a proporcionar es sistema de numeración decimal
	//fota -> float a ascii
	
	itoa(edad, edadTexto, 10);
	printf("converción a texto: %s %s", edadTexto, "anios");
	
	
	return 0;
}

