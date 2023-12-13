// Questão 1: Faça o teste de mesa do programa dado e indique:

// a) Saída impressa pelo programa:

// b) O estado final da matriz:

#include <iostream>

using namespace std;

void f(int m[3][3]){
    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            if (c > 0){
                m[l][c] = l + m[l][c - 1];
            } else {
                m[l][c] = l + c;
            }
        }
    }
}

int main(){
    int d[3][3];
    f(d);
    cout << d[0][1] << " " << d[0][2] << endl;
    cout << d[1][1] << " " << d[1][2] << endl;
    return 0;
}

// Resposta:

// Linhas: 15,16,3,4,5,6,9,5,6,7,5,6,7,5,4,5,6,9,...,18
// Váriaveis: l = 0/1/2/3 | c = 0/1/2/3

// a) 0 0
//    2 3

// b) 0 0 0
//    1 2 3
//    2 4 6

// Questão 2: 

// a) Faça uma função que receba uma matriz preenchida, a quantidade de linhas e quantidades de colunas. Em seguida, realize os seguintes passos:
// I: identifique o maior e menor número positivos da matriz.
// II: retorne para a função principal a raiz quadrada da soma desses dois elementos.

// b) Faça um programa principal que declare uma matriz 3 x 4. Em seguida, preencha toda a matriz lendo seus valores via teclado. Chame a função criada em a). Por fim, imprima o valor retornado pela função.

// Resposta:

// a)

#include <iostream>
#include <cmath>

float funcao(float mat[3][4], int l, int c){
    float maior = 0;
    float menor = 9999;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if(mat[i][j] < menor && mat[i][j] > 0){
                menor = mat[i][j];
            }
            if(mat[i][j] > maior && mat[i][j] > 0){
                maior = mat[i][j];
            }
        }
    }
    return sqrt(maior + menor);
}

// b)

int main(){
    float mat[3][4];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cin >> mat[i][j];
        }
    }
    cout << funcao(mat,3,4);
    return 0;
}

// Questão 3: Um determinado município concede auxílio financeiro a famílias pobres. As famílias são consideradas pobres quando a renda per capita é menor ou igual a R$210,00. O auxílio concedido possui um valor fixo de R$300,00 mais um valor variável que depende da idade dos integrantes da família. Será pago o valor de R$130,00 por criança com idade entre 0 e 3 anos, além de R$65,00 por integrante com idade entre 4 e 21 anos.

// a) Crie uma estrutura que armazene as informações de uma família, as quais são: cpf do responsável pela família, renda per capita, número de integrantes da família e um vetor com a idade de cada integrante da família. Considere que as famílias possuem, no máximo, 100 integrantes.

// b) Crie uma função que receba como parâmetro uma estrutura criada no item a) e calcule o valor total do auxílio que será concedido. Ao final, imprima o CPF do responsável e o valor do auxílio. Caso a família não deve receber o auxílio, a função deve imprimir "Família não elegível".

// c) Na função principal, declare uma variável do tipo da estrutura criada, leia e armazene as informações da família na seguinte ordem: cpf do responsável, renda per capita, número de integrantes da família e idade de cada integrante, conforme exemplo de entrada abaixo. Em seguida, chame a função criada para mostrar o valor do auxílio concedido à família.

// Resposta:

// a)

struct Familia {
    char cpf[15];
    float renda;
    int numIntegrantes;
    int idades[100];
};

// b) 

void auxilio(Familia f){
    if (f.renda <= 210){
        float auxilio = 300;
        for (int i = 0; i < f.numIntegrantes; i ++){
            if (f.idades[i] <= 3){
                auxilio += 130;
            } else if (f.idades[i] <= 21){
                auxilio += 65;
            }
        }
        cout << "CPF responsável: " << f.cpf << endl;
        cout << "Auxílio concedido: " << auxilio;
    } else  {
        cout << "Família não é elegível";
    }
}

// c)

int main(){
    Familia f;
    cin.getline(f.cpf,15);
    cin >> f.renda;
    cin >> f.numIntegrantes;
    for (int i = 0; i < f.numIntegrantes; i++){
        cin >> f.idades[i];
    }
    auxilio(f);
    return 0;
}