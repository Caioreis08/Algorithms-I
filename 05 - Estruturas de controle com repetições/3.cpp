// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,40 metro e cresce 3 centímetros por ano. Construa um algoritmo para calcular e imprimir quantos anos serão necessários para que Zé seja maior que Chico.

#include <iostream>

using namespace std;

void crescimento(){

    int anos;
    float chico = 1.50, ze = 1.40;

    for(int ano = 0; chico >= ze; ano++){
        chico += 0.02;
        ze += 0.03;
        anos = ano;
    }
    cout << "São necessários " << anos << " anos para Zé ser maior que Chico." << endl;
}
int main(){

    crescimento();
    return 0;
}