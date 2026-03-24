#include <stdio.h>
#include <locale.h>

int main() {

	float preco_f, desc, preco_i, cod;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite preço do produto \n");
	scanf("%f", &preco_i);
	
	printf("Digite o codigo do produto \n");
	scanf("%f", &cod);

	if (preco_i <= 30) {

        preco_f = preco_i;
        printf("valor do desconto: 0 \n");
		printf("Valor do preço final: $%2.f", preco_f);

	} else if(preco_i >30 && preco_i <=100) {

        desc = preco_i * 10/100;
	    preco_f = preco_i - desc;
	    printf("valor do desconto: $%2.f \n", desc);
		printf("Valor do preço final: $%2.f", preco_f);
		
	} else
	{
	    desc = preco_i * 15/100;
	    preco_f = preco_i - desc;
	    printf("valor do desconto: $%2.f \n", desc);
		printf("Valor do preço final: $%2.f", preco_f);
		
	}

	return 0;
}