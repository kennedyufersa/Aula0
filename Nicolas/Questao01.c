#include <stdio.h>

int main(){

    int i, n, s = 0;
    float med = 0;

    printf("Deseja inserir quantos numeros? ");
    scanf("%d", &n);

    int vet[n];

    for(i = 0; i < n; i++ ){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        s = s + vet[i];
    }

    printf("A soma dos numeros e %d\n", s);

    printf("A media e %.2f", med = s/n);

    return 0;
}