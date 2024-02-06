// Questão 1: Faça o teste de mesa do programa abaixo e indique:

// a) A saída impressa pelo programa:

// b) O estado final do vetor b. Obs: use apenas números ou ? para representar posições não inicilizadas.

#include <iostream>

using namespace std;

int funcao(int v1[], int v2[], int tam){
    int i;
    for (i = 0; i < tam; i++){
        if (v1[i] % 2 == 0){
            v2[i] = v1[i] * 2 + 1;
        }
        else if (i % 3 == 0){
            v2[i] = v1[i];
        }
        else{
            v2[i] = 0;
        }
    }
}
int main(){
    int a[4] = {9, 3, 6, 2};
    int b[4];
    int i;
    funcao(a, b, 4);
    for (i = 3; i >= 0; i = i - 2){
        cout << b[i];
    }
    return 0;
}

// Resposta:

// Linhas: 13,14,15,16,17,2,3,4,5,7,8,4,5,7,9,10,4,5,6,4,5,6,4,18,19,18,19,18,20
// Váriaveis: i (main): 3/1/-1 | tam: 4 | i (função): 0/1/2/3/4

// a) 9 3 6 2

// b) 9 0 13 5

// Questão 2: A espionagem digital e o uso de criptografia em conflitos e guerras entre povos e nações não é algo novo e já existe em conflitos desde a 2a Guerra Mundial. Considerando uma adaptação da famosa cifra de César para codificação de mensagens, implemente uma função que receba como parâmetros um vetor de caracteres (string) e um inteiro k. Cada caractere, exceto espaços em branco, deve ser substituído pelo caractere atual somado a (k + 2) e, em seguida, a função deve imprimir a mensagem codificada. Elabore também um programa principal (main) que leia uma mensagem de até 100 caracteres e um valor k e chame a função acima para imprimir a mensagem codificada.

// Resposta:

#include <iostream>

using namespace std;

void funcao(char str[], int k){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ''){
            str[i] = str[i] + k + 2;
        }
    }
    cout << str;
}

int main(){
    char str[101];
    int k;
    cin.getline(str,101);
    cin >> k;
    funcao(str,k);
    return 0;   
}

// Questão 3: Rebeca é uma aluna do curso de Ciência da Computação que precisa fazer um trabalho e pediu sua ajuda. Para isso você vai ter que:

// a) Criar uma função que recebe como parâmetros quatro vetores do memso tamanho T. Dois vetores chamados V1 e V2 são recebidos preenchidos com valores inteiros e, os dois vetores chamados V3 e V4 são recebidos vazios. A função deve preencher os vetores V3 e V4 com a combinação de V1 e V2. Para isso, é preciso que o usuário digite um índice chamado P. Assumir que o usuário conhece o problema e vai digitar um valor para P que seja maior que 0 e menor que T-1. Logo após, a função deve preencher o vetor V3 com os mesmos valores de V1 do índice 0 até o índice P. Do índice P+1 até o final, V3 deve ser preenchido com os mesmos valores de V2. O V4 deve ser preenchido com os mesmo valores de V2 do índice 0 até o indíce P e do índice P+1 até o final com os mesmo valores de V1.

// b) Faça um programa principal que declare quatro vetores do tipo inteiro de tamanho 5. Faça a leitura de valores para dois desses vetores. Chame a função da letra a) passando os quatro vetores declarados como parâmetros. No final, imprimir, conforme o exemplo, os vetores que foram preenchidos pela função.

// Resposta:

// a)

void funcao(int v1[], int v2[], int v3[], int v4[], int t){
    int p;
    cin >> p;
    for(int i = 0; i < t; i++){
        if(i < p){
            v3[i] = v1[i];
            v4[i] = v2[i];
        } else {
            v3[i] = v2[i];
            v4[i] = v1[i];
        }
    }
}

// b)

int main(){
    int v1[5], v2[5], v3[5], v4[5];
    for(int i = 0; i < 5; i++){
        cin >> v1[i];
    }
    for(int i = 0; i < 5; i++){
        cin >> v2[i];
    }
    funcao(v1, v2, v3, v4, 5);
    for(int i = 0; i < 5; i++){
        cout << v3[i] << "";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << v4[i] << "";
    }
    return 0;
}