#include <stdio.h>
#include <stdlib.h>

int fat(int n){ // feito pelo professor
    if (n == 1){
        return(1);
    }

    return ( n * fat(n-1));
}

int mdc(int a, int b){ // feito pelo professor
    if(a % b == 0){
        return(b);
    }

    return(mdc(b, a % b));
}

int mdc3(int a, int b, int c){ // feito pelo professor
    return (mdc(mdc(a, b), c));
}

int fib(int n){ // erro
    if(n == 1){
        return(1);
    }
    return(n + fib(n - 1));
}

int primo(int x, int divisor){ // divisor é sempre x - 1, feito pelo professor
    if(divisor == 1){
        return(1);
    } else if( x % divisor == 0){
        return(0);
    }

    return (primo(x, divisor - 1));
}

int decrescente(int x){ //erro
    if(x > 0){
        return(decrescente(x - 1));
    }
}

int res(int a, int b){
    if( a / b == 1){
        return(a % b);
    }

    return(res(a/b, b));
}

int form(int n){
    if( n == 1){
        return( n * n);
    }
    return( form(n - 1));
}

int mmc(int a, int b){
    int aux, acumulador = 1;

    if( a % 2 == 0){
        aux = 2;
        acumulador *= aux;
        return (acumulador);
    } else if( b % 2 == 0){
            aux = 2;
            acumulador *= aux;
            return (acumulador);
            } else if( a % 3 == 0){
                        aux = 3;
                        acumulador *= aux;
                        return (acumulador);
                    } else if( b % 3 == 0){
                                aux = 3;
                                acumulador *= aux;
                                return (acumulador);
                            } else if( a % 5 == 0){
                                        aux = 5;
                                        acumulador *= aux;
                                        return (acumulador);
                                    } else if( b % 5 == 0){
                                                aux = 5;
                                                acumulador *= aux;
                                                return (acumulador);
                                            }

    return(mmc(a/aux, b/aux));
}

float div1(float a, float b){
    return(a / b);
}

float raiz(int n){ // feito pelo professor

    float aux = n / 2;

    if(aux * aux <= n + 0.0001 && aux * aux >= n - 0.0001){
        return(aux);
    } else if(aux * aux > n){
        return(raiz(aux / 2));
    } else if(aux * aux < n){
        return(raiz(3 * aux / 2));
    }
}

int dig(int n){

    int auxu = 0, auxd = 0, acumuladord = 0, auxc = 0, acumuladorc = 0;
    
    if( n < 10){
        auxu = n;

    } else if( n < 100){
        auxd = n - 10;
        acumuladord++;
        n = auxd;
        if( auxd < 10){
            return ( dig(n));
        }
    } else if(n < 1000){
        auxc = n - 100;
        acumuladorc++;
        n = auxc;
        if(auxc < 100){
            return(dig(n));
        }
    }

    return(auxu + acumuladord + acumuladorc);
}

int exponencialdohud(int k, int n){
    if(n == 1){
        return(k);
    } else if (n == 0){
        return(0);
    }

    return(exponencialdohud(k, n - 1));
}

int crescente(int n){
    int aux = 1;
    if(aux <= n){
        return(crescente(aux + 1));
    }
}


int main(){

    int a, b, c, n, resultado;
    float a1, a2;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &n);
    printf("O fatorial de %d eh: %d \n",n, fat(n));

    printf("Entre com dois números para calcular o mdc:");
    scanf("%d %d", &a, &b);
    printf("O mdc de %d e %d eh: %d \n", a, b, mdc(a, b));

    printf("Entre com três numeros para calcular o mdc:");
    scanf("%d %d %d", &a, &b, &c);
    printf("O mdc de %d, %d, e %d eh: %d \n", a, b, c, mdc3(a, b, c));

    printf("Digite o termo desejado para a sequencia fibonnaci: ");
    scanf("%d", &n);
    printf("O %d° termo da sequencia fibbonaci eh: %d \n", n, fib(n));

    printf("Digite um numero para saber se ele eh primo: ");
    scanf("%d", &n);
    printf("1 para primo 0 para não primo, o resultado eh: %d \n", primo(n, n - 1));

    printf("Digite o numero desejado para ver a sequencia decrescente: ");
    scanf("%d", &n);
    printf("A sequencia decrescente eh %d \n", decrescente(n));

    printf("Digite dois numeros para ver o resto da divisao: ");
    scanf("%d %d", &a, &b);
    printf(" O resto da divisao de %d e %d eh: %f \n", a, b, res(a, b));

    printf("Digite um numero para ver o somatorio:");
    scanf("%d", &n);
    printf("O somatorio de %d eh %d \n", n, form(n));

    printf("Digite dois numeros para ver o mmc:");
    scanf("%d %d", &a, &b);
    printf(" O mmc de %d e %d eh: %d \n", a, b, mmc(a, b));

    printf("Entre com dois numeros para ver a divisao inteira:");
    scanf("%f %f", &a1, &a2);
    printf(" A divisao inteira de %f e %f eh %d\n", a, b, div1(a, b));

    printf("Digite um numero para saber a sua raiz:");
    scanf("%d", &n);
    printf("A raiz de %d eh %f \n", n, raiz(n));

    printf("Digite um numero para ver a soma de seus digitos:");
    scanf("%d", &n);
    printf("A soma dos digitos de %d eh %d \n", n, dig(n));

    printf("Digite dois numeros para ver k^n:");
    scanf("%d %d", &a, &b);
    printf("%d^%d eh: %d", a, b, exponencialdohud(a, b));

    printf("Digite um numero para ver a sua sequencia crescente:");
    scanf("%d", &n);
    printf("A sequencia eh: ");
    printf("A sequencia crescente eh %d\n", crescente(n));

    system("pause");
    return(0);
}