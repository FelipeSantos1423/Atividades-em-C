/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
	float pes, polegadas, jardas, milhas;
	
    setlocale(LC_ALL, "Portuguese");

	printf("escreva uma medida em pés para converção: ");
	scanf("%f", &pes);

	polegadas = pes * 12;
	jardas = pes / 3;
	milhas = jardas/ 1760;

	printf("conversão de pés para polegadas: %.2f", polegadas , "\n");
    printf("conversão de pés para jardas: %.2f", jardas , "\n");
    printf("conversão de pés para milhas: %.2f", milhas , "\n");




	return 0;
}
