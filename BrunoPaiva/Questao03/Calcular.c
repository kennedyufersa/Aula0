// Problema 3 Escreva um programa para calcular e imprimir a soma de todos
// os múltiplos de 7 partindo de 1 até 100.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, soma = 0;
    int n = 100;

    for(i = 7; i <= n; i++){
        if(i % 7 == 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}