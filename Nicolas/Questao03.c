#include <stdio.h>
#include <locale.h>

int main(){
    int i, soma = 0;
    
    for(i = 7; i <= 100; i++){
        if(i % 7 == 0){
            printf("%d  ", i);
            soma = soma + i;
        }
    }
    printf("\nA soma dos multiplos de 7 e %d", soma);
    return 0;
}