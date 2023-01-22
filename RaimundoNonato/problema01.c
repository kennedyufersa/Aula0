#include <stdio.h>

int main (){
    int i;
    int valores;
    int soma = 0;
    int med = 0;

    printf("Informe a quantidade de valores da sequencia:  ");
    scanf("%d", &valores);
        int v[valores];

        for(i = 0; i < valores; i++){
            printf("Informe o %d valor:  ", i);
            scanf("%d", &v[i]);
            soma = soma + v[i];
        }
        med = soma / valores; 
        printf("A media da sequencia e: %d ", med);

    return 0;        
}