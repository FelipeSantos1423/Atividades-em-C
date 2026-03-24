#include <stdio.h> 
#include <locale.h>

int main() {

	float saldo_medio, credito;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o valor do seu saldo médio no último ano: \n");
    scanf("%f", &saldo_medio);
    
    if(saldo_medio > 400){
    	credito = 0.30 * saldo_medio;
    	
	}else if(saldo_medio >300 && saldo_medio <=400){
		credito = 0.25 * saldo_medio;
		
	}else if(saldo_medio > 200 && saldo_medio <= 300){
		credito = 0.20 * saldo_medio;
		
	}else if(saldo_medio <= 200){
		credito = 0.10 * saldo_medio;
	}
	else{
		printf("Valores digitados inválidos");
	}
	
	printf("Valor do saldo médio: R$%2.f \n", saldo_medio);
	printf("Valor do credito: R$%2.f", credito);
	
    return 0; 
}