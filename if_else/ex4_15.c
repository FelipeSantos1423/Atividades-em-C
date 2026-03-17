#include <stdio.h>

int main(){
    int sal_min, nht, ndep, nhet;
    int vh, smes, vdep, vhe, imp, sbruto, sliq, grat, sal_receber;

    printf("Digite o salario minimo, numero de horas trabalhadas, numero de dependentes e numero de horas extras:\n");

    scanf("%d", &sal_min);
    scanf("%d", &nht);
    scanf("%d", &ndep);
    scanf("%d", &nhet);

    vh = sal_min / 5;
    smes = nht * vh;
    vdep = 32 * ndep;
    vhe = nhet * (vh + (vh * 50 / 100));

    sbruto = smes + vdep + vhe;

    if (sbruto < 200){
        imp = 0;
    } else if (sbruto <= 500){
        imp = sbruto * 20 / 100;
    } else {
        imp = sbruto * 30 / 100;
    }

    sliq = sbruto - imp;

    if (sliq <= 350){
        grat = 100;
    } else {
        grat = 50;
    }

    sal_receber = sliq + grat;

    printf("Salario a receber: %d", sal_receber);

    return 0;
}