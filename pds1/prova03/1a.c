#include<stdio.h>
#include<stdlib.h>

struct Pontuacao{
    int identificacao;
    int pontos[18];
};

int main(){
    int soma = 0;
    Pontuacao p;

    printf("Digite a identificacao da pessoa: ");
    scanf("%d", &p.identificacao);

    //Aqui a gente pega as notas do moço
    for(int i = 0; i < 18; i++){
        printf("Digite a nota do individuo na prova %d:", i);
        scanf("%d", &p.pontos[i]);
    }

    //Aqui a gente soma
    for(int i = 0; i < 18; i++){
        soma += p.pontos[i];
    }

    printf("A soma do individuo %d nas 18 provas foi de %d pontos.", p.identificacao, soma);

    system("pause");
    return(0);
}