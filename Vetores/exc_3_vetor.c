/*Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa de
verá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o 
segundo, ao total desse produto em estoque. logo após, o programa deverá ler um conjunto indeterminado 
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a 
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar: 
■
■ se o código do produto solicitado existe. se existir, tentar atender ao pedido; caso contrário, exibir 
mensagem Código inexistente; 
■
■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível, 
escrever a mensagem Não temos estoque suficiente dessa mercadoria. se puder atendê-lo, escrever 
a mensagem Pedido atendido. Obrigado e volte sempre; 
■
■ efetuar a atualização do estoque somente se o pedido for atendido integralmente; 
■
■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados. */

#include <stdio.h>
#define TMAX 10

int main(){
	
	int i, cod_p[TMAX], quant[TMAX], cod_c = 1, cod_pc, quant_c; 
	
	//Leitura dos dados:
	for(i=0; i<TMAX; i++){
		printf("Digite o codigo do produto %d: ", i+1);
		scanf("%d", &cod_p[i]);
		printf("Digite a quantidade do produto %d: ", i+1);
		scanf("%d", &quant[i]);
	}
	
	//Exibição Inicial:
	for(i=0; i<TMAX; i++){
		printf("Codigo do produto %d: %d \n", i+1, cod_p[i]);
		printf("Quantidade do produto %d: %d \n", i+1, quant[i]);
	}
	
	do {

    printf("Digite seu codigo (0 encerra o programa): ");
    scanf("%d", &cod_c);

    if(cod_c == 0){
        break;
    }

    printf("Digite o codigo do produto que deseja: ");
    scanf("%d", &cod_pc);

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quant_c);

    for(i = 0; i < TMAX; i++) {

        if(cod_pc == cod_p[i]) {

            if(quant[i] >= quant_c) {

                quant[i] = quant[i] - quant_c;

                printf("Pedido atendido. Obrigado e volte sempre\n");

            } else {

                printf("Nao temos estoque suficiente dessa mercadoria\n");
            }
        }
        else if(){
        	printf("Codigo inexistente\n");
		}
    }

} while(cod_c != 0);


// Atualizacao do estoque

printf("\n============== ATUALIZACAO ==============\n");

for(i = 0; i < TMAX; i++) {

    printf("Codigo do produto: %d\n", cod_p[i]);
    printf("Quantidade: %d\n", quant[i]);
}
}                    