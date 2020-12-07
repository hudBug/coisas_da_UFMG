#include<stdio.h>
#include<stdlib.h>


float media_matriz(int n, float mat[][100]){

    float soma = 0, media;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma = soma + mat[i][j];
        }
    }

    media = soma / n;

    return(media);
}

int main(){

    int n;
    float media;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float matriz[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao %d %d : ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    media = media_matriz(n, matriz);

    printf("A media da matriz %d eh %f: \n", n, media);

    system("pause");
    return(0);
}