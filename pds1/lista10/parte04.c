#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Circunferencia{
    float p1;
    float p2;

    void atribuir(float a, float b){
        p1 = a;
        p2 = b;
    }

    float area(){
        return(3.14 * pow(p2 - p1, 2));
    }


};

int main(){
    Circunferencia c;
    float a, b, res;

    scanf("%f %f", &a, &b);
    c.atribuir(a, b);

    res = c.area();
    printf("A area eh: %f\n", res);
    
    system("pause");
    return(0);
}