/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float sal, val_vendas, new_sal, comissao;
    
    printf("Digite o salário recebido: \n");
    scanf("%f", &sal);
    
    printf("Digite o valor das vendas: \n");
    scanf("%f", &val_vendas);

    comissao = val_vendas * 4/100;
     new_sal = sal + comissao;
     
     printf("comissão: R$%2.f \n", comissao);
     printf("novo salário: RS$%2.f", new_sal);
     
    return 0;
}
