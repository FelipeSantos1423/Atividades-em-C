/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float comp, larg, area, potencia;
    
    printf("Digite a largura do comodo em metros: \n");
    scanf("%f", &larg);
    
    printf("Digite o comprimento do comodo em metros: \n");
    scanf("%f", &comp);
    
    area = larg * comp;
    
    potencia = area * 18;
    
    printf("Área do comodo: %2.fm² \n", area);
    printf("Potencia necessária: %2.fW \n", potencia);
    return 0;
}
