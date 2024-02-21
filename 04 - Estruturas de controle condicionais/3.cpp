// Faça uma função que receba como parâmetro um número inteiro e informe se ele é divisível por 2.

#include <iostream>

using namespace std;

void numeroDivisivel(int n){

    if(n % 2 == 0){
        cout << "É divisível por 2.";
    }
    else {
        cout << "Não é divisível por 2.";
    }
}
int main(){

    int n;

    cin >> n;
    numeroDivisivel(n);
    return 0;
}