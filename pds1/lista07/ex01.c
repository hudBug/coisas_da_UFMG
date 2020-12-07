#include<stdio.h>
#include<stdlib.h>

void montaArquivo(){
    FILE* arquivo;
    
    arquivo = fopen("listaDeNumeros.txt","w+t");

    for(int i = 1; i <= 1000; i++){
        if(i == 1000){
            fprintf(arquivo, "%d", i);
        }else{
            fprintf(arquivo, "%d\n", i);
        }
        
    }

    fclose(arquivo);
}

void arquivoParaVetor(){
    FILE* arquivo;
    int vetor[1000];
    int cont = 0, numero;

    arquivo = fopen("ListaDeNumeros.txt", "r+t");

    while(!feof(arquivo)){
        fscanf(arquivo, "%d", &numero);
        vetor[cont] = numero;
        cont++;
    }
    fclose(arquivo);

    for(int i = 0; i < 1000; i++){
        printf("%d\n", vetor[i]);
    }

}

int main(){

    montaArquivo();
    arquivoParaVetor();

    system("pause");
    return(0);
}