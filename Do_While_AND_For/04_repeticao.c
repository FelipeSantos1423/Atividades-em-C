/*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. 
Foram obtidos os seguintes dados:
a) código da cidade; 
b) número de veículos de passeio; 
c) número de acidentes de trânsito com vítimas. 
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem; 
b) qual é a média de veículos nas cinco cidades juntas; 
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.*/

#include <stdio.h>
#include <stdint.h> // Tipos de largura fixa

int main()
{
   int cod, veiculos, acidentes, maior, menor, cod_maior, cod_menor, i;
   float total_v = 0;
   float total_a = 0;
   float cid = 0;
   float media_v, media_a;
   
	for(i = 1; i<=3; i++){
		printf("\n Digite o codigo da cidade %d:", i);
		scanf("%d", &cod);
		
		printf("Digite o numero de veiculos da cidade %d:", i);
		scanf("%d", &veiculos);
		
		printf("Digite o numero de acidentes da cidade %d:", i);
		scanf("%d", &acidentes);
		
		////////////////////////////////////////////////////////////////
		if(i == 1){
			maior = acidentes;
			menor = acidentes;
			cod_maior = cod;
			cod_menor = cod;
		}else{
			
			if(acidentes > maior){
				maior = acidentes;
				cod_maior = cod;
			}
			
			if(acidentes < menor){
				menor = acidentes;
				cod_menor = cod;
			}
		}
		
	////////////////////////////////////////////////////////////////
		if(veiculos < 2000){
			total_a = total_a + acidentes;
			cid = cid + 1;
		}
		
	////////////////////////////////////////////////////////////////
		total_v = total_v + veiculos;
	}
	
	printf("\nMaior indice de acidentes: %d \n", maior);
	printf("Cidade: %d \n\n", cod_maior);
	
	printf("Menor indice de acidentes: %d \n", menor);
	printf("Cidade: %d \n\n", cod_menor);
	
	///////////////////////////////////////////////////////////
	media_a = total_a / cid;
	printf("Media de acidentes: %2.f \n\n", media_a);
	
	///////////////////////////////////////////////////////////
	media_v = total_v /3;
	printf("Media de veiculos: %2.f", media_v);
    return 0;
}