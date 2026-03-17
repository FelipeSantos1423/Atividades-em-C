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
  int num1, num2, soma, raiz, op;

    printf("Digite uma opção: \n");
    printf("1- somar dois numeros \n");
    printf("2- raiz quadrada de um numero \n");
    
    scanf("%d", &op);
    
    if(op == 1){
        printf("digite um numero: \n");
        scanf("%d", &num1);
        printf("digite um numero: \n");
        scanf("%d", &num2);
        
        soma = num1 + num2;
        printf("soma: %d", soma);
    }
    else if(op == 2){
        printf("digite um numero: \n");
        scanf("%d", &num1);
        
        raiz = sqrt(num1);
        printf("raiz: %d", raiz);
    }
    
    else{
        printf("Opção inválida");
    }
       return 0;
}
