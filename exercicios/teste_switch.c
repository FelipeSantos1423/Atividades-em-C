#include <stdio.h>
#include <locale.h>

int main(){
	
	int op, val1, val2, conta;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("1 - soma \n 2 - subtração \n 3- multiplicação \n 4 - divisão \n \n");
	printf("Digite sua opção de 1 a 4 \n");
	scanf("%d", &op);
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &val1);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &val2);
	
	switch (op) {
		
		case 1:
			conta = val1 + val2;
			printf("escolheu opção 1 - soma: %d", conta);
			break;
			
			case 2:
			conta = val1 - val2;
			printf("escolheu opção 2 - subtração: %d", conta);
			break;
			
			case 3:
			conta = val1 * val2;
			printf("escolheu opção 3 - multiplicação: %d", conta);
			break;
			
			case 4:
			conta = val1 / val2;
			printf("escolheu opção 4 - divisão: %d", conta);
			break;
			
			default:
				printf("opção escolhida inválida");
	}
	
	return 0;
}