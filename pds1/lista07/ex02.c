#include<stdio.h>
#include<stdlib.h>

void mediaVetor(float vetor[], int n){
    for(int i = 0; i < n; i++){
        printf("A media de %f da posicao %d pelo numero de elementos %d eh: %f\n", vetor[i], i, n, vetor[i] / n);
    }
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

    mediaVetor(vetor, numeroElementos);

    system("pause");
    return(0);
}