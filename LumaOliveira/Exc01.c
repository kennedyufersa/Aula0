#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, valores[num];
    int i, soma=0;
    float media=0;

    printf("Informe quantos numeros voce deseja informar: \n");
    scanf("%d",&num);

    printf("\nInforme valores maiores que zero\n");

    for(i=0 ; i<num ; i++){
        
        printf("Informe os valores:\n ");
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    media = soma/num;
    printf("A media dos valores e igual %.1f\n", media);
    printf("A soma dos valores e igual %d\n", soma);
    return 0;
}