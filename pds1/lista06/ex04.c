#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void montaLista(int n){ // cria a lista com numeros naturais
    FILE *arq;
    float numero;

    arq = fopen("lista.txt", "w+t");

    for(int i = 0; i < n; i++){
        printf("Digite o valor da linha %d: ", i + 1);
        scanf("%f", &numero);
        
        if(i + 1 == n){
            fprintf(arq,"%f", numero);
        }else{
            fprintf(arq,"%f\n", numero);
        }
        
    }

    fclose(arq);
}

void executaFuncao(){
    FILE *funcao, *leNumeros;
    float resultado, incognita;

    funcao = fopen("funcaoAplicada.txt", "w+t");
    leNumeros = fopen("lista.txt", "r+t");

    while(!feof(leNumeros)){
        fscanf(leNumeros, "%f", &incognita);
        resultado = pow(incognita, 2) - 5 * incognita + 1;

        fprintf(funcao, "%f\n", resultado);
    }

    fclose(funcao);
    fclose(leNumeros);
}

int main(){

    int linha;

    printf("Digite a quantidade de linhas desejadas: ");
    scanf("%d", &linha);

    montaLista(linha);
    executaFuncao();

    system("pause");
    return(0);
}