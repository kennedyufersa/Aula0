#include<stdio.h>
int main(){

    int sequencia;
    int soma = 0;
    int media = 0;
    int i;
    printf("Informe o tamanho da sequencia ");
    scanf("%d", &sequencia);
    int vetor[sequencia];
    for(i = 1; i <= sequencia; i++){
        printf("Digite o %d° valor: ", i);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = soma/sequencia;

    printf("A media da sequencia inserida e: %d", media);
return 0;

}