/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float salbase, salrecebe, grati, impos;
  
  printf("Digite seu salário base: ");
  scanf ("%f", &salbase);
  
  grati = salbase * 5/100;
  impos = salbase * 7/100;
  
  salrecebe = salbase + grati - impos;
  
   printf("salario final com aumento de gratificação de 5 porcento e redução de imposto de 7% : R$%.2f", salrecebe);

    return 0;
}
