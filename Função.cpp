#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int divide (int x, int y, int z);

int main (void) 
{
	setlocale (LC_ALL,"portuguese");
	int a, b, c;
		
	printf	("Digite o primeiro n�mero: ");
	scanf	("%d", &a);
	
	printf	("Digite o segundo n�mero: ");
	scanf	("%d", &b);
	
	printf	("Digite o terceiro n�mero: ");
	scanf	("%d", &c);
	
	int r = divide (a, b, c);
	
	printf	("(%d x %d) + (%d + %d) = %d\n", a, a, b, c, r);
		
	return 0;
}

int divide (int x, int y, int z) 
{
	int r = (x*x) + (y+z);
	return r;
}
