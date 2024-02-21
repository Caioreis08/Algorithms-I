// Faça uma função para receber dois números reais e verificar se ambos são maiores que zero. Caso positivo, informar "Valores são válidos". Caso contrário, informar "Valores inválidos".

#include <iostream>

using namespace std;

void verificaçao(float a, float b){

    if(a > 0 && b > 0){
        cout << "Valores são válidos.";
    }
    else {
        cout << "Valores inválidos.";
    }
}
int main(){

    int a, b;

    cin >> a >> b;
    verificaçao(a, b);
    return 0;
}