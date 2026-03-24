/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	float preco, aumento, preco_f, impos;
	int categ;
    char situ;

	printf("Digite o preco do produto: \n");
	scanf("%f", &preco);

	printf("Digite a categoria do produto: \n");
	scanf("%d", &categ);

    printf("Digite a situação do produto do produto: \n");
    scanf(" %c", &situ);

    if(preco <= 25 && categ == 1 && situ == 'R'){
        
            aumento = 0.05 * preco;
            impos = 0.05 * preco;
            preco_f = aumento + preco - impos;
        
            printf("aumento: R$%2.f", aumento);
            printf("preço após aumento e impostos: R$%2.f", preco_f);
        
    }
        else if(preco <= 25 && categ == 1 && situ == 'N'){
        aumento = 0.05 * preco;
        impos = 0.08 * preco;
        preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
    }
    /***************************************************************/
    
        if(preco <=25 && categ == 2){
        
         aumento = 0.05 * preco;
         impos = 0.05 * preco;
         preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
        /************************************************************************/
        
    }else if(preco <= 25 && categ == 3 && situ == 'R'){
        
        aumento = 0.05 * preco;
        impos = 0.05 * preco;
        preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
        
        } else if(preco <= 25 && categ == 3 && situ == 'N'){
        
        aumento = 0.05 * preco;
        impos = 0.08 * preco;
        preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
            
        }
        
        /***********************************************************/
        /***********************************************************/
        
        if(preco > 25 && categ == 1 && situ == 'R'){
        
        aumento = 0.05 * preco;
        impos = 0.05 * preco;
        preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
        }
        
        else if(preco > 25 && categ == 1 && situ == 'N'){
        
        aumento = 0.05 * preco;
        impos = 0.08 * preco;
        preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
            
        
        /***********************************************************/
        
    }else 
        if(preco > 25 && categ == 2){ 
        
         aumento = 0.15* preco;
         impos = 0.05 * preco;
         preco_f = aumento + preco;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
        
        /***********************************************************/
        
    }else
        if(preco > 25 && categ == 3 && situ== 'R'){
        
        aumento = 0.18 * preco;
        impos = 0.05 * preco;
         preco_f = aumento + preco;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
        }
        
        else if(preco > 25 && categ == 3 && situ == 'N'){
        
        aumento = 0.05 * preco;
        impos = 0.08 * preco;
        preco_f = aumento + preco - impos;
        
        printf("aumento: R$%2.f", aumento);
        printf("preço após aumento e impostos: R$%2.f", preco_f);
        
        /***********************************************************/
        /***********************************************************/
        
        }else{
            printf("Valores digitados invalidos!");
        }
        
        printf("preço final do produto: R$%2.f", preco_f);
        
        if(preco_f <= 50){
            printf("prduto barato");
        } else
            if(preco_f >50 && preco_f <120){
                printf("produto normal");
            } else
                if(preco_f >= 120){
                    printf("produto caro");
                }
        
	return 0;
}