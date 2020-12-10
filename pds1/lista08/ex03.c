#include<stdio.h>
#include<stdlib.h>

void identidade(int n, float A[][100]){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if( i == j){
                A[i][j] = 1.0;
            } else{
                A[i][j] = 0.0;
            }
        }
    }

    printf("Matriz identidade:\n");

    for(int q = 0; q < n; q++){
        for(int w = 0; w < n; w++){
            printf("%f ", A[q][w]);
            if(w == n - 1){
                printf("\n");
            }
        }
    }
}

int main(){
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float A[n][n];

    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor de %d %d: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }*/

    identidade(n, A);

    system("pause");
    return(0);
}