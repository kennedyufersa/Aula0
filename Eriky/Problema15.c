#include <stdio.h>

int main(void){
    int lado1, lado2, x, y;
    printf("DIGITE A QUANTIDADES DE LINHAS: ");
    scanf("%d",&lado1);
    printf("DIGITE A QUANTIDADES DE COLUNAS: ");
    scanf("%d",&lado2);
    printf("\n");
    y = 0;
    while(y < lado1){
        x = 0;
        while(x < lado2){
            printf("*");
            x++;
        }
        printf("\n");
        y++;
    }
}