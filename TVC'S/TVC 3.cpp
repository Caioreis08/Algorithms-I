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



// Questão 2: A espionagem digital e o uso de criptografia em conflitos e guerras entre povos e nações não é algo novo e já existe em conflitos desde a 2a Guerra Mundial. Considerando uma adaptação da famosa cifra de César para codificação de mensagens, implemente uma função que receba como parâmetros um vetor de caracteres (string) e um inteiro k. Cada caractere, exceto espaços em branco, deve ser substituído pelo caractere atual somado a (k + 2) e, em seguida, a função deve imprimir a mensagem codificada. Elabore também um programa principal (main) que leia uma mensagem de até 100 caracteres e um valor k e chame a função acima para imprimir a mensagem codificada.

// Resposta:



// Questão 3: Rebeca é uma aluna do curso de Ciência da Computação que precisa fazer um trabalho e pediu sua ajuda. Para isso você vai ter que:

// a) Criar uma função que recebe como parâmetros quatro vetores do memso tamanho T. Dois vetores chamados V1 e V2 são recebidos preenchidos com valores inteiros e, os dois vetores chamados V3 e V4 são recebidos vazios. A função deve preencher os vetores V3 e V4 com a combinação de V1 e V2. Para isso, é preciso que o usuário digite um índice chamado P. Assumir que o usuário conhece o problema e vai digitar um valor para P que seja maior que 0 e menor que T-1. Logo após, a função deve preencher o vetor V3 com os mesmos valores de V1 do índice 0 até o índice P. Do índice P+1 até o final, V3 deve ser preenchido com os mesmos valores de V2. O V4 deve ser preenchido com os mesmo valores de V2 do índice 0 até o indíce P e do índice P+1 até o final com os mesmo valores de V1.

// b) Faça um programa principal que declare quatro vetores do tipo inteiro de tamanho 5. Faça a leitura de valores para dois desses vetores. Chame a função da letra a) passando os quatro vetores declarados como parâmetros. No final, imprimir, conforme o exemplo, os vetores que foram preenchidos pela função.

// Resposta: