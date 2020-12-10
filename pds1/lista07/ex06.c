#include<stdio.h>
#include<stdlib.h>

float produtoEscalar(float vetor1[], float vetor2[], int n){
    float vetorProduto[n];
    float acumulador = 0;

    for(int i = 0; i < n; i++){
        vetorProduto[i] = vetor1[i] * vetor2[i];
    }

    for(int j = 0; j < n; j++){
        acumulador += vetorProduto[j];
    }

    return(acumulador);
}

int main(){

    int numeroElementos;
    float escalar;

    printf("Digite quantos elementos deseja colocar nos vetores: ");
    scanf("%d", &numeroElementos);

    float vetor1[numeroElementos];
    float vetor2[numeroElementos];

    for(int i = 0; i < numeroElementos; i++){
        printf("Digite o valor para a posicao %d do primeiro vetor:", i);
        scanf("%f", &vetor1[i]);
    }

    for(int i = 0; i < numeroElementos; i++){
        printf("Digite o valor para a posicao %d do segundo vetor:", i);
        scanf("%f", &vetor2[i]);
    }

    escalar = produtoEscalar(vetor1, vetor2,numeroElementos);

    printf("A escalar dos dois vetores eh: %f\n", escalar);

    system("pause");
    return(0);
}