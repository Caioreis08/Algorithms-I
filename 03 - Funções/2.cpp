// Escreva uma função para receber por parâmetro o tempo de duração de um experimento expresso em segundos e imprimir esse mesmo tempo em horas, minutos e segundos.

#include <iostream>

using namespace std;

void conversaoSegundos(int segundos){

    int h, m, s, resto;

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    cout << h << " hora(s), " << m << " minuto(s) " << s << " segundo(s)";
}
int main(){

    int segundos;

    cin >> segundos;
    conversaoSegundos(segundos);
    return 0;
}