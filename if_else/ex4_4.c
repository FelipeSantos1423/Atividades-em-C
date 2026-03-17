/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    
       printf("Digite o segundo número: \n");
       scanf("%d", &num2);
            
            printf("Digite o terceiro número: \n");
            scanf("%d", &num3);
       
       if(num1 < num2 && num1 < num3){
            if(num2 < num3){
               printf("A ordem crescente é:  %d - %d - %d", num1, num2, num3);
           }
           else{
               printf("A ordem crescente é: %d - %d - %d", num1, num3, num2);
           }
       }
       if(num2 < num1 && num2< num3){
             if(num1 < num3){
               printf("A ordem crescente é: %d - %d - %d", num2, num1, num3);
           }
           else{
               printf("A ordem crescente é: %d - %d - %d", num2, num3, num1);
           }
       }
       if(num3 < num1 && num3< num2){
             if(num1 < num2){
               printf("A ordem crescente é: %d - %d - %d", num3, num1, num2);
           }
           else{
               printf("A ordem crescente é: %d - %d - %d", num3, num2, num1);
           }
       }
       
       return 0;
}
