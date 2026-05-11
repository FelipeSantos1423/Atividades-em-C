#include<stdio.h>

#define TMAX 5

int main(){
	int i, j, qb=0, repetido;
	int a[TMAX], b[TMAX], vezes[TMAX];
	
	for(i=0; i<TMAX; i++){
		printf("Numero: "); scanf("%d",&a[i]);
	}
	
	for(i=0; i<TMAX; i++){
		repetido = 0;
		for(j=0; j<qb; j++)
			if(a[i]==b[j]){
				repetido = 1;
				break;
			}
		if(repetido==0){
			b[qb] = a[i];
			vezes[qb] = 1;
			for(j=i+1; j<TMAX; j++)
				if(a[j]==b[qb])
					vezes[qb]++;
			qb++;
		}
	}
	printf("\n\n");
	for(i=0; i<qb; i++)
		printf("Numero %d apareceu %d vezes\n",b[i],vezes[i]);
	return 0;
}

