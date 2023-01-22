// Problema 1 Escreva um programa para somar uma sequência de inteiros e
// calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
// o número de valores a serem inseridos. Seu programa deve ler apenas um
// valor cada vez que scanf é executado. Uma sequência de entrada típica pode
// ser:
#include <iostream>
using namespace std;

int main(){
int i, somar = 0;
int n, vet[n];
float media = 0;

cout << "Digite a quantidade de numeros: " << endl;
cin >> n;

for(i = 0; i <= n; i++){
    cout << "Digite o numero: " << endl;
    cin >> vet[i];
    somar += vet[i];
}
    media = somar/n;
    cout << media << endl;
    cout << somar << endl;
    return 0;
}