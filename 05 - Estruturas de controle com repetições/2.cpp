// Escreva uma função int somaintervalo (int n1, int n2) para retornar a soma dos números inteiros que existem no intervalo fechado entre n1 e n2. A função deve funcionar inclusive se o valor de n2 for menor que n1.
// n=somaintervalo(3,6) = n recebe 18 (3 + 4 + 5 + 6)
// n=somaintervalo(5,5) = n recebe 5 (5)
// n=somaintervalo(4,0) = n recebe 10 (4 + 3 + 2 + 1 + 0)

#include <iostream>

using namespace std;

int somaintervalo(int n1, int n2){

    int soma;

    if(n1 > n2){
        for(int i = 0 + n1; i >= n2; i--){
            soma += i;
        }
    }
    else{
        for(int i = 0 + n1; i <= n2; i++){
            soma += i;
        }
    }
    return soma;
}
int main(){

    int n1, n2, res;

    cin >> n1 >> n2;
    res = somaintervalo(n1, n2);
    cout << "O resultado da soma dos números do intervalo fechado é: " << res;
    return 0;
}