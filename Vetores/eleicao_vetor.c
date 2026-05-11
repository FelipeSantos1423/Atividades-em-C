#include<stdio.h>
#include<locale.h>

#define QT_CAND   5
#define QT_FX_ET  6

int main(){
	int i, n, tm=0, tf=0;
	int tot_v[QT_CAND]={0}, tot_fe[QT_FX_ET]={0};
	int tot_m[QT_CAND]={0}, tot_f[QT_CAND]={0};
	
	setlocale(LC_CTYPE,"Portuguese");
	printf("Quantidade de eleitores: ");
	scanf("%d",&n);
	if(n<1){
		printf("Quantidade inválida!\n");
		return 1;
	}
	int voto[n], id[n];
	char sx[n];
	
	// Leitura dos votos
	for(i=0; i<n; i++){
		system("CLS");
		printf("Eleitor %d: \n",i+1);
		printf("Voto.: "); scanf("%d",&voto[i]);
		printf("Idade: "); scanf("%d",&id[i]);
		printf("Sexo.: "); scanf(" %c",&sx[i]);
	}
	
	// Totalização
	for(i=0; i<n; i++){
		// Por candidato e por sexo
		switch(voto[i]){
			case 10:
				tot_v[0]++;
				if(sx[i]=='m') tot_m[0]++;
				else           tot_f[0]++;
				break;
			case 20:
				tot_v[1]++;
				if(sx[i]=='m') tot_m[1]++;
				else           tot_f[1]++;
				break;
			case 30:
				tot_v[2]++;
				if(sx[i]=='m') tot_m[2]++;
				else           tot_f[2]++;
				break;
			case 92:
				tot_v[3]++;
				if(sx[i]=='m') tot_m[3]++;
				else           tot_f[3]++;
				break;
			default:
				tot_v[4]++;
				if(sx[i]=='m') tot_m[4]++;
				else           tot_f[4]++;
				break;
		}
		// Por faixa etária
		if(id[i]<19) tot_fe[0]++;
		else if(id[i]<26) tot_fe[1]++;
			 else if(id[i]<35) tot_fe[2]++;
			      else if(id[i]<60) tot_fe[3]++;
			      	   else tot_fe[4]++;
	}
	
	system("CLS");
	printf("-------------------------------------------\n");
	printf("            RESUMO DOS VOTOS\n");
	printf("-------------------------------------------\n");
	printf("ELEITOR\t\tVOTO\tIDADE\tSEXO\n");
	for(i=0; i<n; i++)
		printf("   %2d\t\t %d\t  %d\t  %c\n",i+1,voto[i],id[i],sx[i]);
	printf("-------------------------------------------\n");
	
	system("PAUSE");
	system("CLS");
	printf("-------------------------------------------\n");
	printf("            RESULTADO DA ELEIÇÃO\n");
	printf("-------------------------------------------\n");
	printf("\tCANDIDATO\tTOTAL\n");
	for(i=0; i<3; i++)
		printf("\t   %2d\t\t  %d\t\n",(i+1)*10,tot_v[i]);
	printf("\t   NULO\t\t  %d\t\n",tot_v[4]);
	printf("\t   BRANCO\t  %d\t\n",tot_v[3]);
	
	system("PAUSE");
	system("CLS");
	printf("-------------------------------------------\n");
	printf("          RESUMO POR FAIXA ETÁRIA\n");
	printf("-------------------------------------------\n");
	printf("\t   FAIXA\tTOTAL\n");
	printf("\t   15-18\t  %d\t\n",tot_fe[0]);
	printf("\t   19-25\t  %d\t\n",tot_fe[1]);
	printf("\t   26-35\t  %d\t\n",tot_fe[2]);
	printf("\t   35-60\t  %d\t\n",tot_fe[3]);
	printf("\t   >60\t\t  %d\t\n",tot_fe[4]);
	printf("-------------------------------------------\n");
	
	system("PAUSE");
	system("CLS");
	printf("-------------------------------------------\n");
	printf("          RESUMO POR SEXO\n");
	printf("-------------------------------------------\n");
	printf("    SEXO\t10\t20\t30\tNULO\tBRANCO\n");
	printf("masculino\t");
	for(i=0; i<QT_CAND; i++) printf(" %d\t",tot_m[i]); 
	printf("\nfeminino\t");
	for(i=0; i<QT_CAND; i++) printf(" %d\t",tot_f[i]);
	printf("\n-------------------------------------------\n");
	
	return 0;
}

