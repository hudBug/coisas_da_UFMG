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
    FILE *lista, *funcao;
    int a, b, c, d, x;
    float resultado;

    lista = fopen("lista.txt", "r+t");
    funcao = fopen("funcaoAplicada.txt", "w+t");

    while(!feof(lista)){
        printf("Digite o valor de a: ");
        scanf("%d", &a);
        printf("Digite o valor de b: ");
        scanf("%d", &b);
        printf("Digite o valor de c: ");
        scanf("%d", &c);
        printf("Digite o valor de d: ");
        scanf("%d", &d);

        fscanf(lista, "%f", &x);

        resultado = (a * (pow(x, 2) * x)) + (b * pow(x, 2)) + c * x + d;

        fprintf(funcao, "%f\n", resultado);
    }
    fclose(lista);
    fclose(funcao);
}

int main(){
    int linhas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    montaLista(linhas);
    executaFuncao();
    system("pause");
    return(0);
}