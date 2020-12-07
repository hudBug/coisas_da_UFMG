#include<stdio.h>
#include<stdlib.h>

void primos(int n){ //deu trabalho mas funciona
    FILE *arq;
    int cont = 0;

    arq = fopen("primos.txt", "w + t");
    for(int j = 2; j <= n; j++){
        for(int i = 1; i <= n; i++){
            if(j % i == 0){
                cont++;
            }
        }
        if(cont < 3){
            fprintf(arq,"%d\n",j);
        }
        cont = 0;
    }

    fclose(arq);
}

int main(){
    int n;

    printf("Digite o numero desejado: ");
    scanf("%d", &n);

    primos(n);

    system("pause");
    return(0);
}