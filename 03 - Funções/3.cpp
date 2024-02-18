// Escreva uma função para receber as três notas de um aluno e imprimir a média ponderada. Considere como peso das notas os seguintes valores: 2, 3, 5.

#include <iostream>

using namespace std;

float mediaponderada(float n1, float n2, float n3){

    float media;

    media = (2 * n1 + 3 * n2 + 5 * n3) / 10;
    return media;
}
int main(){

    float nota1, nota2, nota3, media;

    cin >> nota1 >> nota2 >> nota3;
    media = mediaponderada(nota1, nota2, nota3);
    cout << "A média ponderada é: " << media;
    return 0;
}