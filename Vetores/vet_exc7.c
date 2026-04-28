/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[8], i, j, z, aux;
    i = 1;
    
    while(i<= 8){
        printf("escreva aux: \n");
        scanf("%d", &aux);
        
    j = 1;
    
    while(j < i && vet[j] < aux){
        j = j + 1;
    }
    
    z = i;
    
    while(z>= j+1){
        vet[z] = vet[z-1];
        z = z-1;
    }
    vet[j] = aux;
    i = i + 1;
    }

    for(i = 1; i<=8; i++){
        printf("vetor %d: %d \n", i, vet[i]);
    }
    return 0;
}