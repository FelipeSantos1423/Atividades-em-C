/*Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de 
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos pro
dutos. Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão 
aumento. 
sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a 
R$ 1.000,00. sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e 
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será 
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.*/

#include<stdio.h>
#define TMAX 3

int main(){
	int i, cod_prod[TMAX];
	float preco_prod[TMAX];
	
	for(i=0; i<TMAX; i++){
		printf("Digite o codigo do produto %d: ", i+1);
		scanf("%d", &cod_prod[i]);
		
		printf("Digite o preco do produto %d: ", i+1);
		scanf("%f", &preco_prod[i]);
		
		if(cod_prod[i] %2==0 && preco_prod[i]>1000){
			preco_prod[i] += ((preco_prod[i] /100) * 20);
		}
		else if(cod_prod[i]%2==0){
		 	preco_prod[i] += ((preco_prod[i] /100) * 15);
		 }
		 else if(preco_prod[i]>1000){
		 	preco_prod[i] += ((preco_prod[i] /100) * 10);
		 }
	}
	
	for(i=0; i<TMAX; i++){
		 	printf("Codigo do produto %d: [%d]", i+1, cod_prod[i]);
		 	printf("Valores do produto %d: [%.2f]\n", i+1, preco_prod[i]);
		 	
		 }
	
	return 0;
}
