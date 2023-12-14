// Escreva um programa que leia dois valores inteiros e efetue as seguintes operações matemáticas: adição, subtração, multiplicação, divisão e módulo (resto da divisão).

#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "OPERAÇÕES SOBRE INTEIROS" << endl;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "\n";
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " % " << b << " = " << a % b << endl;

    return 0;
}