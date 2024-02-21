// Tendo dados de entrada a altura (em metros) e o sexo da pessoa ('m' para masculino e 'f' para feminino), faça uma função para calcular e retornar seu peso ideal, utilizando a fórmula peso = (72.7 * altura) - 58 para homens e peso = (62.1 * altura) - 44.7 para mulheres.

#include <iostream>

using namespace std;

float pesoIdeal(float altura, char c){

    float peso;

    switch(c){
        case 'm':
            peso = (72.7 * altura) - 58;
            return peso;
        case 'f':
            peso = (62.1 * altura) - 44.7;
            return peso;
        default:
            cout << "Erro, tente novamente." << endl;
            cin >> altura >> c;
            peso = pesoIdeal(altura, c);
    }
}
int main(){

    float altura, peso;
    char c;

    cin >> altura;
    cin >> c;
    peso = pesoIdeal(altura, c);
    cout << "O peso ideal para o sexo escolhido é: " << peso << "KG.";
    return 0;
}