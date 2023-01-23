#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int i, c = 30, f;
    printf("Celcius\t Fahrenheit\n");
    for(i = 30; i <= 50; i++){
        f = c + 32;
        printf("%d °C\t %d °F\n", c, f);
        c = c + 1;
    }
    return 0;
}
