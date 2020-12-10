#include<stdio.h>
#include<stdlib.h>

int simetrica(int n, float A[100][100], float T[100][100]){

    int teste = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(T[i][j] == A[i][j]){
                teste =1;
            } else{
                teste = 0;
            }
        }
    }

    return(teste);
}

int main(){

    int n, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float A[n][n], T[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao %d %d: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            T[i][j] = A[j][i];
        }
    }

    resultado = simetrica(n, A, T);

    printf("%d", resultado);

    system("pause");
    return(0);
}