// Dada uma dívida de R$ 10.000,00 que cresce a juros de 2,5% ao mês e uma aplicação de R$1.500,00 com rendimento de 4% ao mês, escreva uma função para determinar o número de meses necessários para pagar a dívida utilizando esta aplicação.

#include <iostream>

using namespace std;

void divida(){

    float divida, juros, aplicacao, rendimento;
    int meses;
    meses = 0;
    divida = 10000;
    juros = 0.025;
    aplicacao = 1500;
    rendimento = 0.04;

    while(divida > aplicacao){
        divida = (divida * juros) + divida;
        aplicacao = (aplicacao * rendimento) + aplicacao;
        meses++;
    }
    cout << "Foi necessário " << meses << " meses para liquidar a dívida.";
}
int main(){

    divida();
    return 0;
}
