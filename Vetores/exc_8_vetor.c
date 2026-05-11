/*Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média 
final desses alunos. Calcule e mostre: 
¦
¦ o nome do aluno com maior média (desconsiderar empates); 
¦
¦ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar 
na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.*/

#include<stdio.h>
#define tmax 3

int main(){
	 int i, cod_aluno[tmax], aluno_max=0;
	 float media_aluno[tmax], media_maior=0, exame; 
	 
	 for(i=0; i<tmax; i++){
	 	printf("Digite o codigo do aluno %d: ", i+1);
	 	scanf("%d", &cod_aluno[i]);
	 	printf("Digite a media do aluno %d: ", i+1);
	 	scanf("%f", &media_aluno[i]);
		 
		 
		 if(media_aluno[i]<7){
		 printf("!!! RECUPERACAO !!! \n");
		 printf("Digite o valor da nota do exame final: ");
		 scanf("%f", &exame); 
		 media_aluno[i] = (media_aluno[i] + exame)/2;
		 
		 if(media_aluno[i]>=5){
		 	printf("Passou com ajuda, SAFADO! \n\n");
			 }else{
			 	printf("Reprovou com ajuda, BURRO! \n\n");
			 }
		} else{
			printf("Passou de boa, PARABENS! \n\n");
		}
		
		if(media_aluno[i]>media_maior){
		 	media_maior = media_aluno[i];
		 	aluno_max = cod_aluno[i];
		 }
	}	
    
    printf("\n Codigo do aluno com maior media: %d \n", aluno_max);
    printf("Maior media: %.2f", media_maior);
	
	return 0;
}
