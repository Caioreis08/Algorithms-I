// Escreva uma função para receber a idade de uma pessoa em anos, meses e dias e retornar essa idade expressa em dias. Considere que cada ano possui 365 dias e cada mês possui 30 dias. Imprima o resultado na função principal.

#include <iostream>

using namespace std;

int conversaoIdadeDias(int anos, int meses, int dias){

    int x;

    x = anos * 365 + meses * 30 + dias;
    return x;
}
int main(){

    int anos, meses, dias, resultado;

    cin >> anos >> meses >> dias;
    resultado = conversaoIdadeDias(anos, meses, dias);
    cout << "A idade expressa em dias é: " << resultado << " dias";
    return 0;
}