#include <stdio.h>
#include <stdlib.h>

void maior(int a, int b, int c){
    if( a > b && a > c){
        printf("%d e o maior numero\n", a);
    } else if(b > c && b > a){
        printf("%d e o maior numero\n", b);
    } else{
        printf("%d e o maior numero\n", c);
    }
}

void menor(int a, int b, int c){
    if( a < b && a < c){
        printf("%d e o menor numero\n", a);
    } else if(b < c && b < a){
        printf("%d e o menor numero\n", b);
    } else{
        printf("%d e o menor numero\n", c);
    }
}

int main(){
    
    int a, b, c;
    
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    maior(a, b, c);
    menor(a, b, c);

    system("pause");
    return 0;
}