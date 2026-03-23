/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int horas_ex, horas_fal, h, h_min;
    
    printf("DIgite o nº de horas extras: \n");
    scanf("%d", &horas_ex);
    
    printf("DIgite o nº de horas faltadas: \n");
    scanf("%d", &horas_fal);
    
    h = horas_ex - (2/3 * (horas_fal));
    
    h_min = h * 60;
    
    if(h_min>=2400){
        
        printf("premio de R$500");
        
        }
        else if(h>1800 && h<2400){
         printf("premio de R$400");
            
        }
         
          else if(h>=1200 && h<1800){
         printf("premio de R$300");
          }
          
          else if(h>=600 && h<1200){
         printf("premio de R$200");
          }
          
         else if(h<600){
         printf("premio de R$100");
         }
           else {
               printf("merece nada");
           }
    
    
    return 0;
}
