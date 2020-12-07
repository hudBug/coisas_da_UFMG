#include<stdlib.h>
#include<stdio.h>

void transposta(int n, float A[100][100], float T[100][100]){
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            T[i][j] = A[j][i];
        }
    }

    printf("Matriz Transposta: \n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%f ", T[i][j]);
            if(j == n-1){
                printf("\n");
            }
        }
    }

}

int main(){
    
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float A[n][n], T[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Digite o valor da posicao %d %d: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    transposta(n, A, T);

    system("pause");
    return(0);
}