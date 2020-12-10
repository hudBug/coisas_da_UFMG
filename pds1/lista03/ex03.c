#include <stdio.h>
#include <stdlib.h>

void bissexto(int ano){
    if( ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("%d e um ano bissexto\n", ano);
    } else{
        printf("%d nao e um ano bissexto\n", ano);
    }
}

int main(){
    int ano;

    printf("Digite um ano:");
    scanf("%d", &ano);
    bissexto(ano);
    
    system("pause");
    return(0);
}