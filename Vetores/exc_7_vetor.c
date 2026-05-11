/*Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números 
negativos e a soma dos números positivos desse vetor. */
#include<stdio.h>
#define tmax 5
int main(){
	int i, num_negativos = 0;
	float num[tmax], soma_p = 0;
	
	for(i=0; i<tmax; i++){
		printf("Digite o valor do vetor %d: ", i);
		scanf("%f", &num[i]);
		
		if(num[i]<0){
			num_negativos++;
		}
		else{
			soma_p += num[i];
		}
	}
	
	for(i=0; i<tmax; i++){
		printf("Vetor [%d] = %.2f \n", i, num[i]);
	}
	
	printf("Quantidade de numeros negativos: %d \n", num_negativos);
	printf("Soma dos numeros positivos: %.2f \n", soma_p);
	return 0;
}
