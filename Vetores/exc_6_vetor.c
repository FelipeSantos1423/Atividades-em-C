/*Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor. 
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor. 
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na 
loja. Calcule e mostre: 
¦
¦ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão; 
¦
¦ o total das vendas de todos os vendedores; 
¦
¦ o maior valor a receber e o nome de quem o receberá; 
¦
¦ o menor valor a receber e o nome de quem o receberá. */

#include<stdio.h>
#define tmax 3
int main(){
	
	int i, total_vendas[tmax], cod_vendedor[tmax], maior_vendedor, menor_vendedor;
	float percentual[tmax], comissao[tmax]={0}, maior_comissao, menor_comissao;
	
	for(i=0; i<tmax; i++){
		printf("Digite o codigo do vendedor %d: ", i+1);
		scanf("%d", &cod_vendedor[i]);
		
		printf("Digite o total de vendas: ");
		scanf("%d", &total_vendas[i]);
		
		printf("Digite o percentual de vendas que tem direito: ");
		scanf("%f", &percentual[i]);
		
		comissao[i] = total_vendas[i] * percentual[i] / 100;
		
		//quando i ser igual a 0, os primeiros valores menores e maiores iniciaram com os primeiros valores normais//
		if(i == 0){

   		maior_comissao = comissao[i];
	    menor_comissao = comissao[i];
	
	    maior_vendedor = cod_vendedor[i];
	    menor_vendedor = cod_vendedor[i];

      	}//dps i = 1 e ai por diante, entao se os proximos valores serem maior ou menor do q antes, muda;
		else{
			if(comissao[i]> maior_comissao){
			maior_comissao = comissao[i];
			maior_vendedor = cod_vendedor[i];
			}
		
			if(comissao[i]<menor_comissao){
			menor_comissao = comissao[i];
			menor_vendedor = cod_vendedor[i];
			}
		}
	} 
		printf("\n\n======REVIEW======\n");
	for(i=0; i<tmax; i++){
		printf("codigo do vendedor %d: [%d] \n", i+1, cod_vendedor[i]);
		printf("Valor a receber referente a comissao: [%f] \n", comissao[i]);
		printf("Total de vendas: [%d]\n", total_vendas[i]);
	}
	
		printf("vendedor com maior valor a receber e seu respectivo valor: [%d], [%.2f]\n", maior_vendedor, maior_comissao);
		printf("Vendedor com menor valor a receber e seu respectivo valor: [%d], [%.2f]\n", menor_vendedor, menor_comissao);
	
	return 0;
}
