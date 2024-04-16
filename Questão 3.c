#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nomes[5][50];
    float notas[5][3], media[5], soma;

    for(int l = 0; l < 5; l++){
        soma = 0; 
        printf("Digite o nome do(a) aluno(a): \n");
        scanf("%s", nomes[l]);
        
        for(int c = 0; c < 3; c++){
            printf("Digite a %iº nota do aluno(a) %s \n", c+1, nomes[l]);
            scanf("%f", &notas[l][c]);
            soma += notas[l][c];
        }
        media[l] = soma / 3;
        printf("\n%s, você obteve média %.1f.\n\n", nomes[l], media[l]);
    }   
    return 0;
}
