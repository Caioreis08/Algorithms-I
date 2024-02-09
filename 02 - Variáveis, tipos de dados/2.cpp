// Calcule e apresente o volume de uma lata de óleo, utilizando a fórmula volume = 3.14159 * raio * raio * altura.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    float volume, raio, altura;

    cout << "Informe o raio e, logo em seguida, a altura." << endl;
    cin >> raio >> altura;

    volume = 3.14159 * pow(raio, 2) * altura;

    cout << "O volume da lata é " << volume << " cm^3";

    return 0;
}

