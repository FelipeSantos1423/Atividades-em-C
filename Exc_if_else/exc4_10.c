#include <stdio.h>
#include <locale.h>

int main() {

	float preco_c, custo_f, p_dist, p_imp;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite o custo de fabrica do carro: \n");
	scanf("%f", &custo_f);

	if (custo_f <= 12000) {

		p_dist = custo_f * 5/100;
		preco_c = p_dist + custo_f;
		
		printf("Valor do preço final do carro: $%2.f", preco_c);

	} else if(custo_f >12000 && custo_f <=25000) {

		p_imp = custo_f * 15/100;
		p_dist = custo_f * 10/100;
		preco_c = p_dist + custo_f + p_imp;
		
		printf("Valor do preço final do carro: $%2.f", preco_c);
		
	} else
	{
		p_imp = custo_f * 20/100;
		p_dist = custo_f * 15/100;
		preco_c = p_dist + custo_f+ p_imp;
		
		printf("Valor do preço final do carro: $%2.f", preco_c);
	}

	return 0;
}