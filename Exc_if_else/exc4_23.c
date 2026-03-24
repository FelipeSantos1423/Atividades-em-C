/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int cod, quant;
	float preco, preco_n, preco_f, desc;
        
        printf("Digite o codigo do produto: \n");
        scanf("%d", &cod);
        
        printf("Digite a quantidade a ser comprada: \n");
        scanf("%d", &quant);
        
        if(cod >= 1 && cod <=10){
            
            preco = 10;
            
            preco_n = preco * quant;
            
          if(preco_n <250){
              desc = preco_n * 0.05;
               preco_f = preco_n - desc;
               
            }else if(preco_n >=250 && preco_n <500){
              desc = preco_n * 0.10;
               preco_f = preco_n - desc;
               
                    }else if(preco_n >500){
                        desc = preco_n * 0.15;
                         preco_f = preco_n - desc;
                    }
            /*****************************************************/
        }
        else if(cod >=11 && cod <=20){
            
            preco = 15;
            
             preco_n = preco * quant;
            
          if(preco_n <250){
              desc = preco_n * 0.05;
               preco_f = preco_n - desc;
               
            }else if(preco_n >=250 && preco_n <500){
              desc = preco_n * 0.10;
               preco_f = preco_n - desc;
               
                    }else if(preco_n >500){
                        desc = preco_n * 0.15;
                         preco_f = preco_n - desc;
                    }
            /*****************************************************/
        }
        else if(cod >=21 &&cod <=30){
            
            preco = 20;
            
             preco_n = preco * quant;
            
          if(preco_n <250){
              desc = preco_n * 0.05;
               preco_f = preco_n - desc;
               
            }else if(preco_n >=250 && preco_n <500){
              desc = preco_n * 0.10;
               preco_f = preco_n - desc;
               
                    }else if(preco_n >500){
                        desc = preco_n * 0.15;
                         preco_f = preco_n - desc;
                    }
            /*****************************************************/
        }
        else if(cod >=31 && cod <=40){
            
            preco = 30;
            
             preco_n = preco * quant;
            
          if(preco_n <250){
              desc = preco_n * 0.05;
               preco_f = preco_n - desc;
               
            }else if(preco_n >=250 && preco_n <500){
              desc = preco_n * 0.10;
               preco_f = preco_n - desc;
               
                    }else if(preco_n >500){
                        desc = preco_n * 0.15;
                         preco_f = preco_n - desc;
                    }
            /*****************************************************/
        } else{
            printf("Valores digitados invalidos!");
        }  
        
        printf("preço unitario do produto: R$%2.f \n", preco);
        printf("preço total da nota: R$%2.f \n", preco_n);
        printf("valor de desconto: R$%2.f \n", desc);
        printf("preço final do produto: R$%2.f", preco_f);
        
        
	return 0;
}