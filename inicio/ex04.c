/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float salario, novosal;
  
  printf("Digite seu salário atual: ");
  scanf ("%f", &salario);
  
  novosal = salario + (salario * 25/100);
  
   printf("salario final com aumento de 25 porcento: R$%.2f", novosal);

    return 0;
}
