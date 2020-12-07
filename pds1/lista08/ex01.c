#include<stdio.h>
#include<stdlib.h>

void lerArquivo(){

    int num;
    FILE * arq;

    arq = fopen("ex01.txt", "r + t");

    while(!feof(arq)){
        fscanf(arq, "%d", &num);
        printf("%d ", num);
    }
}


int main(){

    lerArquivo();

    system("pause");
    return(0);
}