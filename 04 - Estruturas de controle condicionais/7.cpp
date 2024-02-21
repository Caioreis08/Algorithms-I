// Os funcionáios de uma empresa receberam um aumento de salário: técnicos (código = 1), 50%; gerentes (código = 2), 30%; demais funcionários (código = 3), 20%. Escreva uma função para ler o código do cargo de um funcionário e o valor do seu salário atual. Após a leitura, calcule e imprima o novo salário após o aumento.

#include <iostream>
#include <iomanip>

using namespace std;

void aumentoSalario(int a, float salario){

    cout << setprecision(2);

    switch(a){
        case 1:
            cout << "Novo salário: R$ " << salario + (salario * 0.5);
            break;
        case 2:
            cout << "Novo salário: R$ " << salario + (salario * 0.3);
            break;
        case 3:
            cout << "Novo salário: R$ " << salario + (salario * 0.2);
            break;
        default:
            cout << "Erro.";
            break;
    }
}
int main(){

    int a;
    float salario;

    cin >> a >> salario;
    aumentoSalario(a, salario);
    return 0;
}