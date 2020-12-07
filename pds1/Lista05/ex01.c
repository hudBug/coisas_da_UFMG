#include <stdio.h>
#include <stdlib.h>

int fat(int n){

    int acumulador = 0;

    for(int i = n; i > 1; i--){
        acumulador = i * (i - 1);
    }

    return(acumulador);
}

int mdc(int a, int b){
    
}

int main(){
    int a, b ,c;

    printf("Digite o numero desejado para a fatorial:");
    scanf("%d", &a);

    printf("Digite o numero desejado para o calculo do mdc:");
    scanf("%d %d", &a, &b);

    system("pause");
    return(0);
}