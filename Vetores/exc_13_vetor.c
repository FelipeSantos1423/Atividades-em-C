/*Faça um programa que receba o codigo e a nota de oito alunos e mostre o relatório a seguir:
Digite o codigo do 1o aluno: Carlos
Digite a nota do Carlos: 8
Digite o codigo do 2o aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??*/

#include <stdio.h>
#define TMAX 8

int main(){
	
	float nota[TMAX], media_f;
	float media = 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	int i, cod_a[TMAX];
	
		for(i = 0; i<TMAX; i++){
			printf("Digite o codigo do aluno %d: ", i+1);
			scanf("%d", &cod_a[i]);
			
			printf("Digite a nota do aluno %d: ", i+1);
			scanf("%f", &nota[i]);
			
			media +=nota[i];
		}
		
		media_f = media / TMAX;
		
		//exibição dos dados:
		for(i = 0; i<TMAX; i++){
			printf("Codigo do aluno %d: %d  nota: %.2f \n", i+1, cod_a[i], nota[i]);
		}
		
		printf("Media das notas dos alunos: %.2f ", media_f);
	return 0;
}                  