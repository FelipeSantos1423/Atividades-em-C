#include <stdio.h> 

int main() {

    int n1, n2, n3, n4;
    
    printf("digite os 4 numeros:\n");
    
	printf("Numero 1\n");
    scanf("%d", &n1);
    
    printf("Numero 2\n");
    scanf("%d", &n2);
    
    printf("Numero 3\n");
    scanf("%d", &n3);
    
    printf("Numero 4\n");
    scanf("%d", &n4);
    
    int soma = n1 + n2 + n3 + n4;
    
    printf("soma dos 4 numeros: %d", soma);
    
    return 0; 
}