#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, e, f;
	float d;
	//suma
	a = 3 + 4;
		printf ("suma a: %d", a);
	
	//resta
	
	b = 6 - 2;
		printf ("\nresta b: %d", b);
		
	c = a * 2;
		printf ("\n muliplicacion c: %d", c);
	
	d = b / 2.5; //recordar que se pone %f para numeros floantes
		printf ("\ndivicion d: %.2f", d);
	
	f = 9 % 2;
		printf ("\nresiduo de f: %0.1f", f);
		
	e = pow(a, 2);	
		printf ("\npotencia de e: %d", e);
	return 0;
}

