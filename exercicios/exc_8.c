/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, peso_g;
    
    printf("Digite seu peso em kg: \n");
    scanf("%f", &peso);
    
    peso_g = peso * 1000;
    
     printf("peso digitado em gramas: %2.fg", peso_g);
    return 0;
}
