/*Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos 
iguais a 30, mostrando as posições em que apareceram. */

#include <stdio.h>
#define TMAX 5

int main(){	
	int i, num[TMAX];
	
	for(i = 0; i<TMAX; i++){
		printf("Digite o valor do vetor [%d]: ", i);
		scanf("%d", &num[i]);
	}
	
		for(i = 0; i<TMAX; i++){
		if (num[i] == 30){
			printf("vetor [%d] contem 30 \n", i);
		}
	}
	return 0;
}  