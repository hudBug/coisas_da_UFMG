#include<stdlib.h>
#include<stdio.h>

void maiorElemento(float vetor[], int n){
    float maior = vetor[0];

    for(int i = 1; i < n; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }

    printf("O maior numero da sequencia eh: %f\n", maior);
}

int main(){

     int numeroElementos;

    printf("Digite quantos elementos deseja colocar no vetor: ");
    scanf("%d", &numeroElementos);

    float vetor[numeroElementos];

    for(int i = 0; i < numeroElementos; i++){
        printf("Digite o valor para a posicao %d:", i);
        scanf("%f", &vetor[i]);
    }

    maiorElemento(vetor, numeroElementos);

    system("pause");
    return(0);
}