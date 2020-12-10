#include<stdio.h>
#include<stdlib.h>

void montaLista(int n){ // cria a lista com numeros naturais
    FILE *arq;

    arq = fopen("naturais.txt", "w+t");

    for(int i = 1; i <= n; i++){
        fprintf(arq, "%d\n", i);
    }

    fclose(arq);
}

void primos(){ 
    FILE *novoArq, *primosArq;
    int cont = 0, num;

    novoArq = fopen("naturais.txt", "r+t");
    primosArq = fopen("primos.txt", "w+t");

    while(!feof(novoArq)){
        fscanf(novoArq, "%d", &num);

        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                cont++;
            }
        }

        if(cont < 3){
            fprintf(primosArq,"%d\n",num);
        }
        cont = 0;
    }
    
    fclose(primosArq);
    fclose(novoArq);
}

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    montaLista(n);
    primos();

    system("pause");
    return(0);
}