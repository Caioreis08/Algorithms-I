// Escreva uma função para receber como parâmetro um valor n inteiro e positivo e calcular o valor de S. A função retornará o valor de S.
// S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

#include <iostream>
#include <iomanip>

using namespace std;

float calcular(int n){

    float s;
    float i;

    for(i = 1; i <= n; i++){
        s += (1/i);
    }
    return s;
}
int main(){

    int n; 
    float res;

    cin >> n;
    res = calcular(n);
    cout << fixed;
    cout << "O valor de S é " << res;
    return 0;
}