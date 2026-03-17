/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, engordou, emagreceu;
    
    printf("Digite seu peso: \n");
    scanf("%f", &peso);
    
    engordou = peso + (peso * 15/100);
    emagreceu = peso - (peso * 20/100);
    
     printf("novo peso se engordar 15%: %2.f \n", engordou);
     printf("novo peso se emagrecer 20%: %2.f", emagreceu);
    return 0;
}
