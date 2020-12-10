#include<stdio.h>
#include<stdlib.h>

struct Pontuacao{
    int identificacao;
    int np;
    int pontos[np&];

    int soma(){
        int somap = 0;
        for(int i = 0; i < np; i++){
            somap += p.pontos[i];
        }
        return(somap);
    }
};

int main(){
    int resultado;
    Pontuacao p;

    printf("Digite a identificacao da pessoa: ");
    scanf("%d", &p.identificacao);

    printf("Digite o numero de provas realizadas pela pessoa: ");
    scanf("%d", &p.np);

    for(int i = 0; i < 18; i++){
        printf("Digite a nota do individuo na prova %d:", i);
        scanf("%d", &p.pontos[i]);
    }

    resultado = p.soma();

    printf("A soma do individuo %d nas %d provas foi de %d pontos.", p.identificacao, p.np, resultado);
    system("pause");
    return(0);
}