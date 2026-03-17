/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float sal, resto, conta1, conta2, n_conta1, n_conta2;
    
    printf("digite o salário recebido: \n");
    scanf("%f", &sal);
    
     printf("digite o valor da conta 1: \n");
    scanf("%f", &conta1);
    
     printf("digite o valor da conta 2: \n");
    scanf("%f", &conta2);
    
    n_conta1 = conta1 + (conta1 * 2/100);
    n_conta2 = conta2 + (conta2 * 2/100);
    
    resto = sal - n_conta1 - n_conta2;
    
    printf("salário restante ao pagar as duas contas com multa de 2%: RS$%2.f ", resto);
     
    return 0;
}
