#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int m[3][3], l, c, i = 1;
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite o %iº valor da matriz: ", i++);
			scanf("%i", &m[l][c]);
		}
	}
	printf("\nMatriz\n");
	for(l = 2; l >= 0; l--){
		for(c = 2; c >= 0; c--){
			printf("%i  ", m[l][c]);
		}
		printf("\n");
	}
	
	return(0);
}
