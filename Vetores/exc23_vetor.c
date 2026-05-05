/*Inicialmente, todas as poltronas estarão livres. Depois disso, o programa deverá apresentar as seguintes
opções:
■■ vender passagem;
■■ mostrar mapa de ocupação do ônibus;
■■ encerrar*/

#include <stdio.h>

int main(){
	
	int janelas[3], corredor[3], i, num;
	char op;
	
	for(i=1; i<=3; i++){
		
		janelas[i] = 0;
		corredor[i] = 0;
	}
	
	printf("Digite uma opcao: Vender passagem (V), Mostrar ocupacao (O), Encerrar (E): ");
	scanf(" %c", &op);
	
	switch(op){
		
			case 'V':
		
			
			////////////////////////
			for(i = 1; i<=3; i++){
					if(janelas[i] == 1 && corredor[i] == 1){
						printf("Todos os lugares estao ocupados");
					}
					break
				}			
			break;
			
			case 'O':
				printf("Janelas: ");
				for(i = 1; i <=3; i++){
					printf("Posicao %d = %d\n", i, janelas[i]);
				}
				
				printf("corredor: ");
				for(i = 1; i <=3; i++){;
					printf("Posicao %d = %d\n", i, corredor[i]);
				}
				
			break;
			
			case 'E':
				printf("Programa encerrado");
			break;
			
			default:
				printf("opcao invalida");
				break;
	}
	
	return 0;
}