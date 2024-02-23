// Desenvolva uma função para imprimir todos os números pares no intervalo 1-100.

#include <iostream>

using namespace std;

void imprimePar(){

    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            cout << " " << i;
        }
    }
}
int main(){

    imprimePar();
    return 0;
}