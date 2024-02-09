// Construa um algoritmo que faça a leitura de uma temperatura em graus Celsius e a apresente convertida em Fahreint. A fórmula de conversão: F = (9*C+160)/5.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float celsius, fahreint;

    cout << "Insira a temperatura em celsius para a conversão: " << endl;
    cin >> celsius;

    fahreint = (9 * celsius + 160) / 5;

    cout << setprecision (2) << fixed;
    cout << "A temperatura em fahreint é " << fahreint << " °F";

    return 0;
}