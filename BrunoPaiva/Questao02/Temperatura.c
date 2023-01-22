// Escreva um programa que converta temperaturas de 30 o C a
// 50 o C para a escala Fahrenheit espaçados de 1 o C. O programa deve imprimir
// uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica:
// F = C + 32]

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int c = 30, f;
    printf("Celcius\t Fahrenheit\n");
    while(c <= 50){
        f =  c + 32;
        printf("%.d °C\t %d °F\n", c, f);
        c += 1;
    }
    return 0;
}