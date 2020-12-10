#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Ponto{
    float x;
    float y;

    float distancia(Ponto& p){
        return( sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y)));
    }

    void atribuir(float a, float b){
        x = a;
        y = b;
    }
};

int main(){

    Ponto p, p1;
    float a, b, a1, b1, dist;

    scanf("%f %f", &a, &b);
    scanf("%f %f", &a1, &b1);

    p.atribuir(a, b);
    p.atribuir(a1, b1);

    dist =  p.distancia(p1);

    printf("A distancia entre os dois pontos eh: %f\n", dist);

    system("pause");
    return(0);
}