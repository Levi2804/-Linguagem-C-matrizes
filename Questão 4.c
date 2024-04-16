#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float A[4][2], B[4][2];
	int i = 1, l, c;
	printf("Preenchimento da Matriz A\n");
	for(l = 0; l < 4; l++){
		for(c = 0; c < 2; c++){
			printf("%iº número: ", i++);
			scanf("%f", &A[l][c]);
		}
	}
	
	for(l = 0; l < 4; l++){
		for(c = 0; c < 2; c++){
			B[l][c] = A[3 - l][1 - c];
		}
	}
	
	printf("\n\n>>Matriz A\n");
	for(l = 0; l < 4; l++){
		for(c = 0; c < 2; c++){
			printf("%.1f  ", A[l][c]);
		}
		printf("\n");
	}
	
	printf("\n\n>>Matriz B\n");
	for(l = 0; l < 4; l++){
		for(c = 0; c < 2; c++){
			printf("%.1f  ", B[l][c]);
		}
		printf("\n");
	}
	return(0);
}
