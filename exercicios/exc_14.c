/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano_atual, ano_nasc, idade_a, idade_m, idade_d, idade_s;
    
    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &ano_nasc);
    
    printf("Digite seu ano que estamos: \n");
    scanf("%d", &ano_atual);
    
    idade_a = ano_atual - ano_nasc;
    
    idade_m = idade_a * 12;
    
    idade_d = idade_a * 365;
    
    idade_s = idade_d / 7;
    
    
     printf("sua idade em anos: %d \n", idade_a);
     printf("sua idade em meses: %d \n", idade_m);
     printf("sua idade em semanas: %d \n", idade_s);
     printf("sua idade em dias: %d \n", idade_d);
     
    return 0;
}
