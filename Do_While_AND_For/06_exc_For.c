#include <stdio.h>

int main()
{
   int cod, n_horas, n_funcionario, i;
   float val_hora, sal_ini, aux_alimento, sal_final;
   float sal_min = 450;
   char turno, categoria;
   
   printf("Digite o numero de funcionarios da empresa: ");
   scanf("%d", &n_funcionario);
   
   ////////////////////////////////////////////////
   for(i = 1; i<=n_funcionario; i++){
   	printf("\n Digite o codigo do funcionario: ");
   	scanf("%d", &cod);
   	printf("\n");
   	
   	printf("Digite o numero de horas trabalhadas: ");
   	scanf("%d", &n_horas);
   	printf("\n");
   	
   	printf("Digite o turno em que trabalha, (M) ou (V) ou (N): ");
   	scanf(" %c", &turno);
   	printf("\n");
   	
   	printf("Digite sua categoria, (O) ou (G): ");
   	scanf(" %c", &categoria);
   	printf("\n");
   	
   	if(categoria == 'G' && turno == 'N'){
   		val_hora = (sal_min * 18) / 100;
	}
	else if(categoria == 'G' && turno == 'M' || turno == 'V' ){
		val_hora = (sal_min * 15) / 100;
	}
	else if(categoria == 'O' && turno == 'N'){
   		val_hora = (sal_min * 13) / 100;
	}
	else if(categoria == 'O' && turno == 'M' || turno == 'V' ){
		val_hora = (sal_min * 10) / 100;
	}
	//////////////////////////////////////////////
	sal_ini = val_hora * n_horas;
	
   	//////////////////////////////////////////////
   	if(sal_ini < 300){
   		aux_alimento = (sal_ini * 20) / 100;
	   }
	   else if (sal_ini < 600){
	   	aux_alimento = (sal_ini * 15) / 100;
	   }
	   else{
	   	aux_alimento = (sal_ini * 5) / 100;
	   }
   	//////////////////////////////////////////////
   	sal_final = sal_ini + aux_alimento;
   	
   	//////////////////////////////////////////////
   	printf("INFORMACOES DO FUNCIONARIO: %d \n", i);
   	printf("Codigo do funcionario: %d \n", cod);
   	
   	switch(turno){
        case 'M':
            printf("Periodo: Matutino\n");
            break;

        case 'V':
            printf("Periodo: Vespertino\n");
            break;

        case 'N':
            printf("Periodo: Noturno\n");
            break;

        default:
            printf("Valor Digitado Inválido\n");
            break;
    }

    //////////////////////////////////////////////
    switch(categoria){
        case 'O':
            printf("Cargo: Operario\n");
            break;

        case 'G':
            printf("Cargo: Gerente\n");
            break;

        default:
            printf("Valor Digitado Inválido\n");
            break;
    }
	   
	//////////////////////////////////////////////   
	printf("Numero de horas trabalhadas: %d \n", n_horas);
	printf("Valor da hora trabalhada do funcionario: %2.f \n", val_hora);
	printf("Salario incial do funcionario: %2.f \n", sal_ini);
	printf("Valor do auxilio alimentacao: %2.f \n", aux_alimento);
	printf("Salario final do funcionario: %2.f \n", sal_final);
   }
}