// A conversão de graus Fahrenheit para Celsius é obtida pela fórmula C = (F-32)/1.8. Desenvolva um algoritmo para calcular e imprimir uma tabela de graus Celsius em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1.

#include <iostream>
#include <iomanip>

using namespace std;

void conversao(){

    for(float f = 50; f <= 150; f++){
        float c = (f-32)/1.8;
        cout << setprecision(2) << fixed;
        cout << f << "°F em Celsius: " << c << "°C" << endl;
    }
}
int main(){

    conversao();
    return 0;
}