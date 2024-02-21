// Faça uma função para ler dois números inteiros e informar se o primeiro é maior, menor ou igual ao segundo.

#include <iostream>

using namespace std;

void lerNumero(int a, int b){

    if(a > b){
        cout << "O primeiro número é maior que o segundo.";
    }
    else if(a < b){
        cout << "O primeiro número é menor que o segundo.";
    }
    else {
        cout << "O primeiro número é igual ao segundo.";
    }
}
int main(){
    
    int a, b;

    cin >> a >> b;
    lerNumero(a, b);
    return 0;
}