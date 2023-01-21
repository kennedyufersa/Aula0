// Escreva um programa que converta temperaturas de 30 o C a
// 50 o C para a escala Fahrenheit espaçados de 1 o C. O programa deve imprimir
// uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
// F = C + 32]

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float c, f;

    for(c = 30; c <= 50; c++){
        f =  c + 32;
        printf("%.1f\t %.1f\n", c, f);
        c = c + 1;
    }
    return 0;
}