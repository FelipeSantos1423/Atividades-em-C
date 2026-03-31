#include <stdio.h>
#include <locale.h>

int main(){
	
	int op, peso1, peso2;
	float val1, val2, conta;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro valor: \n");
	scanf("%f", &val1);
	
	printf("Digite o segundo valor: \n");
	scanf("%f", &val2);
	
	printf("1 - média aritimetica \n 2 - média ponderada \n \n");
	printf("Digite sua opção 1 ou 2 \n");
	scanf("%d", &op);
	
	
	switch (op) {
		
		case 1:
			conta = (val1 + val2)/2;
			printf("escolheu opção 1 - média aritimética %f", conta);
			break;
			
			case 2:
				printf("DIgite o peso da nota 1: \n ");
				scanf("%d", &peso1);
				printf("DIgite o peso da nota 2: \n ");
				scanf("%d", &peso2);
				
			conta = (val1 * peso1) + (val2 * peso2) / (peso1 + peso2);
			printf("escolheu opção 2 - média ponderada: %f", conta);
			break;
			
			default:
				printf("opção escolhida inválida");
	}
	
	return 0;
}