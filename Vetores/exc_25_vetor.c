/*Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, 
divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos. */

#include<stdio.h>
#define TMAX 3

int main(){
	int i, vet[TMAX], vet_maior=0, vet_total=0;
	float vet_result;
	
	for(i=0; i<TMAX; i++){
		printf("Digite o valor do vetor [%d]: ", i);
		scanf("%d", &vet[i]);
		
		if(vet[i]> vet_maior){
			vet_maior = vet[i];
		}
		vet_total+= vet[i];
	}
	vet_result = vet_total/vet_maior;
	
	printf("Resultado da divisao da soma dos vetores divido pelo maior vetor: [%.2f]", vet_result);
	
	return 0;
}

