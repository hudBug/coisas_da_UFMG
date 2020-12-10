#include<stdio.h>
#include<stdlib.h>

void soma_matriz(int n, float A[100][1000], float B[100][100], float S[100][100]){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            S[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Soma: ");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%f", S[i][j]);
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

    float A[n][n], B[n][n], S[n][n];

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

    soma_matriz(n, A, B, S);
    
    system("pause");
    return(0);
}