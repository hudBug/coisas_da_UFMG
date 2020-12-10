#include <iostream>

using namespace std;

void Piramide(int tam){
    int aux = 1, volta = tam - 1, j, i;

    for(i = 1; i <= tam; i++){
    
        for(j = 1; j<=aux; j++){
            cout << "*";
        }

        if(j == aux){
            j = 0;
        }

        cout << "\n";
        aux++;
    }

    i = volta;
    j = volta;
    aux = 1;

    for(i; i > 0; i--){

        for(j; j>=aux; j--){
            cout << "*";
        }

        if(j <= aux){
            j = volta;
        }

        cout << "\n";
        aux++;
    }

}
int main() {

    int tamanho;

    cout << "Digite o tamanho desejado para a piramide: ";
    cin >> tamanho;

    Piramide(tamanho);

    return(0);
}