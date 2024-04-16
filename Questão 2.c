#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int A[2][3], B[2][3], l, c, i = 1;
	printf("Preenchimento da matriz A\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("Digite o %iº valor: ", i++);
			scanf("%i", &A[l][c]);
		}
	}
	printf("==========================\n");
	printf("Preenchimento da matriz B\n");
	i = 1;
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("Digite o %iº valor: ", i++);
			scanf("%i", &B[l][c]);
		}
	}
	printf("==========================");
	printf("\nMatriz A\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("%i  ", A[l][c]);
		}
		printf("\n");
	}
	printf("==========================");
	printf("\nMatriz B\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("%i  ", B[l][c]);
		}
		printf("\n");
	}
	printf("==========================");
	printf("\nMatriz A + B\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 3; c++){
			printf("%i  ", A[l][c] + B[l][c]);
		}
		printf("\n");
	}
	
	return(0);
}
