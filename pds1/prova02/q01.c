#include<stdio.h>
#include<stdlib.h>

void salvandoValores(char nome[]){
    
    int valor;
    FILE * arquivo;

    arquivo = fopen(nome,"w+t");

    for(int i = 0; i < 5; i++){

        printf("Digite um numero: ");
        scanf("%d", &valor);
        
        fprintf(arquivo, "%d\n", valor);
    }

    fclose(arquivo);
}

void lendoValores(char nome[]){

    FILE* arquivo;
    int valor;

    arquivo = fopen(nome, "r+t");

    printf("Impressao do arquivo:\n");

    for(int i = 0; i < 5; i++){

        fscanf(arquivo,"%d\n", & valor);
        printf("%d\n", valor);
    }

    fclose(arquivo);
}

int main(){

    char nome[40];

    printf("Digite o nome desejado para o arquivo com no amximo 40 caracteres (nao insira espacos): ");
    scanf("%s", nome);

    salvandoValores(nome);
    lendoValores(nome);

    return(0);
}