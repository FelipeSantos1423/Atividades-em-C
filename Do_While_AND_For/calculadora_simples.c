#include<stdio.h>

int main(){
	
	int op;
	float n1, n2, result;
	
	do{
	system("CLS");
	
	printf("============= MENU ============= \n\n");
	printf("Opcao 1 = somar \n");
	printf("Opcao 2 = subtracao \n");
	printf("Opcao 3 = multiplicacao \n");
	printf("Opcao 4 = divisao \n");
	printf("Opcao 5 = finalizar programa \n");
	printf("Opcao: ");
	scanf("%d", &op);
	
	
		
		switch(op){
			
			case 1:
				printf("Digite o primeiro numero: \n");
				scanf("%d", &n1);
				
				printf("Digite o segundo numero: \n");
				scanf("%d", &n2);
				
				result = n1 + n2;
				
				printf("Resultado da conta: %.2f \n", result);
				break;
				
			///////////////////////////////////////////////////
			
				case 2:
				printf("Digite o primeiro numero: \n");
				scanf("%d", &n1);
				
				printf("Digite o segundo numero: \n");
				scanf("%d", &n2);
				
				result = n1 - n2;
				
				printf("Resultado da conta: %.2f \n", result);
				break;
					
			///////////////////////////////////////////////////
			
				case 3:
				printf("Digite o primeiro numero: \n");
				scanf("%d", &n1);
				
				printf("Digite o segundo numero: \n");
				scanf("%d", &n2);
				
				result = n1 * n2;
				
				printf("Resultado da conta: %.2f \n", result);
				break;
				
			///////////////////////////////////////////////////
					
				case 4:
				printf("Digite o primeiro numero: \n");
				scanf("%d", &n1);
				
				printf("Digite o segundo numero: \n");
				scanf("%d", &n2);
				
				if(n2 == 0){
					printf("ERRO! Divisao por 0! \n");
				}
				else{
				
				result = n1 / n2;
				
				printf("Resultado da conta: %.2f \n", result);
			}
				break;
				
				case 5:
					printf("Finalizando programa \n");
					break;
				
				default:
				printf("Opcao invalida! \n");
				break;
		}
		system("PAUSE");		
			}	
			while(op != 5);
	
	return 0;
}