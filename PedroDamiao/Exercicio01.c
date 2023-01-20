#include<stdio.h>
#include<stdlib.h>

void senquenciainteira(){
    
    int cont;
    int soma = 0;
    int numero;
    int valor[numero];
    float media = 0;

    printf("Informe a quantidade da sequencia dos numeros");
    scanf("%d",&numero);

    for(cont=0;cont<numero;cont++){
        printf("informe o valor");
        scanf("%d",&valor[cont]);
        soma = valor + soma;
    }
    
    printf("A somas dos valores e: %d\n", soma += valor[cont]);
    printf("A media do valores e: %f\n", media = soma/numero);
}

int main(){

    senquenciainteira();
}