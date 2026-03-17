/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
  float sal, aument, novo_sal;
  int cargo;

    printf("Digite o cargo do funcionário (1 a 5): \n");
    scanf("%d", &cargo);
    
    printf("Digite o salário: \n");
    scanf("%f", &sal);
    
    if(cargo == 1){
        printf("cargo de escrituário: \n");
        aument = sal * 50/100;
        printf("o valor do aumento: %2.f \n", aument);
        novo_sal = aument + sal;
        printf("o novo salário: %2.f", novo_sal);
        
    }
    else if(cargo == 2){
        printf("cargo de secretário: \n");
        aument = sal * 35/100;
        printf("o valor do aument: %2.f \n", aument);
        novo_sal = aument + sal;
        printf("o novo salário: %2.f", novo_sal);
    }
    
    else if(cargo == 3){
        printf("cargo de caixa: \n");
        aument = sal * 20/100;
        printf("o valor do aument: %2.f \n", aument);
        novo_sal = aument + sal;
        printf("o novo salário: %2.f", novo_sal);
    }
    
    else if(cargo == 4){
        printf("cargo de gerente: \n");
        aument = sal * 10/100;
        printf("o valor do aument: %2.f \n", aument);
        novo_sal = aument + sal;
        printf("o novo salário: %2.f", novo_sal);
    }
    
    else if(cargo == 5){
        printf("cargo de diretor: \n");
        aument = sal * 0/100;
        printf("o valor do aument: %2.f \n", aument);
        novo_sal = aument + sal;
        printf("o novo salário: %2.f", novo_sal);
    }
    
    else{
        printf("cargo inválido");
    }
       return 0;
}
