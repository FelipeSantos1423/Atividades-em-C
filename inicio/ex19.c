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
	float a_degrau, a_user, qtd_degrau;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("escreva a altura do degrau, em metros: \n");
    scanf("%f", &a_degrau);
    
	 printf("escreva a altura que você deseja alcançar, em metros: \n");
    scanf("%f", &a_user);
    
    qtd_degrau = a_user / a_degrau;
    
    printf("Quantidade de degraus para subir: %.2f", qtd_degrau, "m");




	return 0;
}
