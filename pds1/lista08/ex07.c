#include<stdio.h>
#include<stdlib.h>

void mult_matriz(int n, float A[100][1000], float B[100][100], float P[100][100]){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            P[i][j] = A[i][j] * B[i][j];
        }
    }

    printf("Multiplicacao: ");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%f", P[i][j]);
            if(j == n - 1){
                printf("\n");
            }
        }
    }   
}

int main(){

    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float A[n][n], B[n][n], P[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao %d %d de A: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao %d %d de B: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    mult_matriz(n, A, B, P);

    system("pause");
    return(0);
}