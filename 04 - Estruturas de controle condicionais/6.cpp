// Faça uma função que recebe o número do dia da semana e imprima o seu respectivo nome por extenso. Considerar o número 1 como domingo, 2 para segunda etc. Caso o dia não exista (menor que 1 ou maior que 7), exibir a mensagem "Dia da semana inválido".

#include <iostream>

using namespace std;

void diaDaSemana(int a){

    switch(a){
        case 1:
            cout << "Domingo";
            break;
        case 2:
            cout << "Segunda";
            break;
        case 3:
            cout << "Terça";
            break;
        case 4:
            cout << "Quarta";
            break;
        case 5:
            cout << "Quinta";
            break;
        case 6:
            cout << "Sexta";
            break;
        case 7:
            cout << "Sábado";
            break;
        default:
            cout << "Dia da semana inválido.";
            break;
    }
}
int main(){

    int a;

    cin >> a;
    diaDaSemana(a);
    return 0;
}