#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num,i;
  float media=0, soma=0; 

  printf("Informe a quantidade de valores: ");
  scanf("%d", &num);

  int vet[num];

  for(i=0; i<num; i++){
    printf("Digite um valor:  ");
    scanf("%d", &vet[i]);
    soma+=vet[i];
  }
  
  media = soma/num;

  printf("\nA media dos valores informados e: %.2f",media);

  return 0; 
}
