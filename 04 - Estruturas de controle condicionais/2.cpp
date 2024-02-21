// Faça um algoritmo para ler dois números inteiros e fazer a divisão do primeiro pelo segundo (somente se o segundo for diferente de zero). Imprima o resultado da operação ou uma mensagem indicando que a operação não foi realizada pois o segundo número era zero.

#include <iostream>

using namespace std;

void lerNumero(int a, int b){

    if(b != 0){
        cout << "Resultado: " << a / b;
    }
    else {
        cout << "A operação não foi realizada pois o segundo número é zero.";
    }
}
int main(){

    int a, b;

    cin >> a >> b;
    lerNumero(a, b);
    return 0;
}

// A questão pede para utilizar dois números inteiros, com isso, não é possível apresentar os resultados em decimal.