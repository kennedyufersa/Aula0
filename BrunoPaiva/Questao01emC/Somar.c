// Escreva um programa para somar uma sequência de inteiros e
// calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique
// o número de valores a serem inseridos. Seu programa deve ler apenas um
// valor cada vez que scanf é executado. Uma sequência de entrada típica pode
// ser:

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, somar = 0;
    int n, vet[n];
    float media = 0;

    printf("Digite a quantidade de números a serem somados: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Insira um número: ");
        scanf("%d", &vet[i]);
        somar += vet[i];
    }
    media = somar/n;
    printf("A soma dos números é: %d\n", somar);
    printf("A média dos números é: %.2f\n", media);
    return 0;
}