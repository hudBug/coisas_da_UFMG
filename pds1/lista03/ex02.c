#include <stdio.h>
#include <stdlib.h>

void par(int x){
    if(x % 2 == 0){
        printf("%d e um numero par\n", x);
    } else{
        printf("%d e um numero impar\n", x);
    }
}

void intervalodentro(int x, int y, int z){
    if( x >= y && x <= z){
        printf("%d esta no intervalor %d - %d\n", x, y, z);
    } else{
        printf("%d nao esta no intervalor %d - %d\n", x, y, z);
    }
}

void intervalofora(int x, int y, int z){
    if( x < y || x > z){
        printf("%d esta fora do intervalor %d - %d\n", x, y, z);
    } else{
        printf("%d nao esta fora do intervalor %d - %d\n", x, y, z);
    }
}

int main(){
    int x, y, z, ano;

    printf("Digite um numero:");
    scanf("%d", &x);
    par(x);

    printf("Digite dois numeros para representarem o intervalo y - z:");
    scanf("%d %d", &y, &z);
    intervalodentro(x, y, z);
    intervalofora(x, y, z);
    
    system("pause");
    return(0);
}