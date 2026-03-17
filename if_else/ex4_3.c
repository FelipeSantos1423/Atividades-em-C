/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    
       printf("Digite o segundo número: \n");
       scanf("%d", &num2);
       
       if(num1 > num2){
           printf("o maior: %d\n", num1);
       }
       else if(num1 == num2){
           printf("os números são iguais");
       }
       else{
           printf("o maior: %d\n", num2);
       }
}
