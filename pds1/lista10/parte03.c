#include<stdio.h>
#include<stdlib.h>

struct Retangulo{
    float p1;
    float p2;
    float p3;
    float p4;
    float l1 = p2 - p1;
    float l2 = p4 - p3;
    float l3 = p3 - p1;
    float l4 = p4 - p2;

    void atribuir(float a, float b, float c, float d){
        p1 = a;
        p2 = b;
        p3 = c;
        p4 = d;
    }

    float perimetro(){
        return(l1 + l2 + l3 + l4);
    }

    float area(){
        return(l1 * l3);
    }

    bool quadrado(){
        if(l1 == l2 && l2 == l3 && l3 == l4){
            return(1);
        } else{
            return(0);
        }
    }
};

int main(){
    Retangulo r;
    float a, b, c, d, res;
    bool teste;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    r.atribuir(a, b, c, d);

    res=r.perimetro();
    printf("O perimetro de r eh: %f\n", res);

    res = r.area();
    printf("A area eh %f\n", res);

    teste = r.quadrado();
    printf("Eh quadrado: %d\n", teste);
    system("pause");
    return(0);
}