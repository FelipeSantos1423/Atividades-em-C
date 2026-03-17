/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temp_c, temp_f;
     
     printf("Digite a temperatura em °C: \n");
     scanf("%f", &temp_c);
     
     temp_f = 180 * (temp_c + 32) / 100;
     
     printf("temperatura em graus digitada em fahrenheit: %2.f", temp_f);
    return 0;
}
