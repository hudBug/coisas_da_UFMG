#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade[100], contador = 0, contadorIf = 0, aux;
    float altura[100], acumulador = 0, media;

    do{
        printf("Digite a idade da pessoa %d: ", contador);
        scanf("%d", &idade[contador]);
        printf("\nDigite a altura da pessoa %d: ", contador);
        scanf("%f", &altura[contador]);

        if(idade[contador] >= 40 && idade[contador] <= 50){
            acumulador += altura[contador];
            contadorIf++;
        }
        
        aux = idade[contador];
        contador++;

        if(contador == 99){
            printf("Não ha mais espaco disponivel");
            aux = 0;
        }

    }while(aux > 0);

    media = acumulador / contadorIf;

    printf("A media da altura entre as pessoas eh: %f\n", media);

    return(0);
}