// Elabore um programa que imprima o extrato de uma conta salário que permite até 3 retiradas por mês. Leia o valor do saldo incial, o valor do salário e o valor de cada retirada, imprimindo saldos parciais e final.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float saldo_inicial, salario, saldo_parcial, saldo_final, retirada1, retirada2, retirada3;

    cin >> salario;
    saldo_inicial = salario;
    cout << setprecision (2) << fixed;
    cout << "Saldo inicial: R$ " << saldo_inicial << endl;

    cin >> retirada1;
    saldo_parcial = saldo_inicial - retirada1;
    cout << "Saldo parcial: R$ " << saldo_parcial << endl;

    cin >> retirada2;
    saldo_parcial -= retirada2;
    cout << "Saldo parcial: R$ " << saldo_parcial << endl;

    cin >> retirada3;
    saldo_parcial -= retirada3;
    saldo_final = saldo_parcial;
    cout << "Saldo parcial: R$ " << saldo_parcial << endl;
    cout << "Saldo final: R$ " << saldo_final << endl;

    return 0;
}