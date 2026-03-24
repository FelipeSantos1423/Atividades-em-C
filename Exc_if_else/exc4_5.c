#include <stdio.h>
#include <locale.h>

int main(){

	float num1, num2, conta;
	int op;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite os dois valores para operação: ");
	scanf("%f", &num1);
	scanf("%f", &num2);
	
	printf("Digite uma opção de operação: (1 a 4) ");
	scanf("%d", &op);
	
	if(op == 1){
		
		conta = (num1 + num2) /2;
		printf("Média dos numeros %2.f", conta);
	} else if(op == 2){
		if(num1 > num2){
			
			 conta = num1 - num2;
			 printf("Diferença do maior pro menor %2.f", conta);
		}else

		conta = num2 - num1;
		printf("Diferença do maior pro menor %2.f", conta);
		
	} else if(op == 3){
		
		conta = num1 * num2;
		printf("Multiplicação dos numeros %2.f", conta);
		
	} else if(op == 4){
		
		conta == num1/num2;
		printf("divisão dos numeros %2.f", conta);
		
	} else{
		printf("Número de operacao invalido!");
	}
	
	return 0;
}