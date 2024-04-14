#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nomes[5][50];
	float notas[5][3], media[5], soma = 0;
	int l, c, i = 1;
	printf("Digite 5 nomes de alunos\n");
	for(l = 0; l < 5; l++){
		gets(nomes[l]);
	}
	printf("\nDigite as três notas dos 5 alunos\n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 3; c++){
			printf("%iª: ", c + 1);
			scanf("%f", &notas[l][c]);
			soma += notas[l][c];
		}
		media[l] = soma/3;
		printf("\n");
	}
	for(l = 0; l < 5; l++){
		printf("%iº: %s, Você obteve média %.1f.\n", l + 1, nomes[l], media [l]);
	}	
	return(0);
}
