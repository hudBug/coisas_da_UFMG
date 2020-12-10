#include<stdlib.h>
#include<stdio.h>

void menorElemento(float vetor[], int n){
    float menor = vetor[0];

    for(int i = 1; i < n; i++){
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    printf("O menor numero da sequencia eh: %f\n", menor);
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

    menorElemento(vetor, numeroElementos);

    system("pause");
    return(0);
}