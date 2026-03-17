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
	float vlr_kw, vlr_salmin, qtd_kw, vlr_reais, desc, vlr_desc;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("escreva o valor do salário mínimo: \n");
	scanf("%f", &vlr_salmin);
	printf("escreva o valor da quantidade de kw consumidas: \n");
	scanf("%f", &qtd_kw);

    vlr_kw = vlr_salmin / 5;
    vlr_reais = vlr_kw * qtd_kw;
    desc = vlr_reais * 15/100;
    vlr_desc = vlr_reais - desc;

printf("valor do kw: R$ %.2f", vlr_kw);
printf("valor a ser pago: R$ %.2f", vlr_reais);
printf("valor a ser pago com desconto: R$ %.2f", vlr_desc);

	return 0;
}
