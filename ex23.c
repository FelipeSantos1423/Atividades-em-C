/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	float num, in, frac, arred;
	
	setlocale(LC_ALL, "Portuguese");
	
    printf("digite o número real: ");
    scanf("%f", &num);
 
    printf("Parte inteira do número digitado: %d \n", (int) num);
    printf("Parte fracionária do número digitado: %.2f \n", num - ((int)num));
    printf("número digitado arredondado: %d", (int) round (num));
	return 0;
}
