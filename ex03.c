/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, p1, p2, p3, media, total;
    
    printf("escreva respectivamente sua nota e o peso \n");
    printf("Nota 1 e peso 1: \n");
    scanf("%f", &n1);
    scanf("%f", &p1);
    
      printf("Nota 2 e peso 2: \n");
    scanf("%f", &n2);
    scanf("%f", &p2);
    
      printf("Nota 3 e peso 3: \n");
    scanf("%f", &n3);
    scanf("%f", &p3);
    
    total = p1 + p2 + p3;
    media = ((n1*p1)+(n2*p2)+(n3*p3))/total;
    
    printf("sua media: %2f", media);

    return 0;
}
