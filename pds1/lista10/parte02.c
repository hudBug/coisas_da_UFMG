#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Triangulo{
    float p1;
    float p2;
    float p3;

    void atribuir(float a, float b, float c){
        p1 = a;
        p2 = b;
        p3 = c;
    }

    float perimetro(){
        float aux = p3 - p2;
        aux += p3 - p1;
        aux += p2 - p1;

        return(aux);
    }

    float area(){
        float a = (p2 - p1) / 2;
        float b = p3 - p1;
        float altura = sqrt(pow(a,2) + pow(b,2));
        float areat = (altura * (p2 - p1)) / 2;

        return(areat);
    }

    bool equilatero(){
        float l1 = p3 - p2;
        float l2 = p3 - p1;
        float l3 = p2 - p1;

        if(l1 == l2 && l2 == l3){
            return(1);
        } else{
            return(0);
        }
    }

    bool semelhante(Triangulo& t){
        if(p1 == t.p1 && p2 == t.p2 && p3 == t.p3){
            return(1);
        } else{
            return(0);
        }
    }
};

int main(){

    Triangulo t1, t2;
    float a, b, c, a1, b1, c1, res;
    bool teste;

    scanf("%f %f %f", &a, &b, &c);
    scanf("%f %f %f", &a1, &b1, &c1);

    t1.atribuir(a,b, c);
    t2.atribuir(a1, b1, c1);

    res = t1.perimetro();
    printf("O perimetro de t1 eh: %f\n", res);

    res = t1.area();
    printf("A area de t1 eh: %f\n", res);

    teste = t1.equilatero();
    printf("Eh equilatero? %d\n", teste);

    teste = t1.semelhante(t2);
    printf("Eh semelhante a t2? %d\n", teste);

    system("pause");
    return(0);
}