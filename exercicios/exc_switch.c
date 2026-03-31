#include <stdio.h>
#include <locale.h>

int main(){
	
	int op;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("1 - programa para saber se numero é par \n 2 - programa pra saber qual número é maior \n 3 - média salarial dois funcionarios \n 4 - desconto de produto \n \n");
	printf("Digite sua opção 1 a 4 \n");
	scanf("%d", &op);
	
	
	switch (op) {
		
		case 1:
			int num1;
			printf("Digite o primeiro numero: \n");
			scanf("%d", &num1);
			
			if(num1 %2 == 0){
				printf("o número é par");
			}
			else{
				printf("o número é impar");
			}
			break;
			
			/*=====================================================*/
			
			case 2:
			float val1, val2;
			printf("Digite o primeiro valor: \n");
			scanf("%f", &val1);
			printf("Digite o segundo valor: \n");
			scanf("%f", &val2);
			
			if(val1 > val2){
				printf("Valor 1 é maior que valor 2");
			}
			else if(val2 > val1){
				printf("Valor 2 é maior que valor 1");
			}
			else{
				printf("os valores são iguais");
			}
			break;
			
			/*=====================================================*/
			
			case 3:
				float sal1, sal2, media;
				printf("Digite o salário do primeiro funcionário em R$: \n");
				scanf("%f", &sal1);
				printf("Digite o salário do segundo funcionário em R$: \n");
				scanf("%f", &sal2);
				
				media = (sal1 + sal2) / 2;
				
				printf("Médai salarial dos dois funcionarios: R$%f \n", media);
			break;
			
			/*=====================================================*/
			
			case 4: 
			float prod, desc, descf, prodf;
			
			printf("Digite o valor do produto em R$");
			scanf("%f", &prod);
			
			printf("Digite o valor do desconto em %");
			scanf("%f", &desc);
			
			desc = prod * (desc/100);
			
			prodf = prod - desc;
			
			printf("Valor final do produto: R$ %f", prodf);
			break;
			
			default:
				printf("opção escolhida inválida");
	}
	
	return 0;
}