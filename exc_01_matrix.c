#include<stdio.h>

int main(){
	
	int i, j;
	float num[2][2], result[2][2], maior;
	
	for(i=0; i<2; i++){
		printf("\nColuna %d \n", i+1);
		for(j=0; j<2; j++){
			printf("Digite o %d° numero: ", j+1);
			scanf("%f", &num[i][j]);
			
			if(maior<num[i][j]){
				maior = num[i][j];
			}
		}
	}
	
	printf("\nMatriz Principal:\n");
	
	//exibir matriz	
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				printf("%.1f\t", num[i][j]);
			}
			printf("\n");
		}
		
		printf("maior numero: %.1f\n", maior);
	
		//Calculando Resultante
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				result[i][j] = num[i][j] * maior;
			}
		}
		
		printf("\nMatriz Resultante:\n");
		
		//exibir matriz	resultante
		for(i=0; i<2; i++){
			for(j=0; j<2; j++){
				printf("%.1f\t", result[i][j]);
			}
			printf("\n");
		}
}