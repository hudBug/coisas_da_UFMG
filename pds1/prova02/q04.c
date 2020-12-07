#include<stdio.h>
#include<stdlib.h>

int somasSucessivas(int a, int b){

    if(a == 1){
        return(b);
    }

    return(somasSucessivas(a - 1, b + b));
}
int main(){
    int a, b, total;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    total = somasSucessivas(a, b);

    printf("%d x %d = %d\n", a, b, total);

    return(0);
}