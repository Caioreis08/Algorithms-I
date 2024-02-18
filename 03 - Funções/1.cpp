// Escreva uma função para receber a base e a altura de um triâangulo. Esta função deve calcular e imprimir a sua área usando a equação Area = (Base * Altura) / 2.

#include <iostream>
#include <iomanip>

using namespace std;

float areaTriangulo(float base, float altura){

    float area;

    area = (base * altura) / 2;
    return area;
}
int main(){

    float base, altura, area;

    cin >> base >> altura;
    area = areaTriangulo(base, altura);
    cout << setprecision(1) << fixed;
    cout << "A área do do triângulo é: " << area << " cm^2";
    return 0;
}