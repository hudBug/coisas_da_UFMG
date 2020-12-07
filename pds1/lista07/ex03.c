#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float variancia(float vetor[], int n){
    float soma = 0, media, acumulador = 0, variancia, aux;

    for(int i = 0; i < n; i++){
        soma += vetor[i];
    }

    media = soma / n;

    for(int j = 0; j < n; j++){
        aux = vetor[j] - media;
        acumulador += pow(aux, 2);
    }

    variancia = acumulador / n;

    return(variancia);

}

int main(){

    int numeroElementos;
    float resultado;

    printf("Digite quantos elementos deseja colocar no vetor: ");
    scanf("%d", &numeroElementos);

    float vetor[numeroElementos];

    for(int i = 0; i < numeroElementos; i++){
        printf("Digite o valor para a posicao %d:", i);
        scanf("%f", &vetor[i]);
    }

    resultado = variancia(vetor, numeroElementos);

    printf("A variancia foi: %f\n", resultado);

    system("pause");
    return(0);
}