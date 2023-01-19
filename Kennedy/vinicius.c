#include <stdio.h>
#include <stdlib.h>

int fun(){
    int i, j,v,soma = 0;
    printf("digite a quantidade de numeros");
    scanf("%d", &i);
    for (j = 0; j < i; j++){
        printf("digite os numeros: ");
        scanf("%d", &v);
        soma=v+soma;
    }
    soma=soma/i;
    printf("\n%d\n", soma);
}

int main(void){

    fun();

    return 0;
}