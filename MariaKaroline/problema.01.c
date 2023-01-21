#include<stdio.h>
#include<stdlib.h>

int main (){
    int  n, i, media = 0, soma = 0;
  
    printf("informe o tamanho da sequencia que deseja: ");
    scanf("%d",&n);
      int v[n];
    for(i= 1; i<=n; i++){
        printf("Informe o %d valor:", i);
        scanf("%d",&v[n]);
        soma += v[n];

    }
  
    media = soma / n;
    printf("A media: %d\n", media);
    printf("A soma: %d\n", soma);
}