#include <stdio.h>

int main(void) {
  int i, j, valores, soma = 0;
  printf("Digite o identificador\n");

  scanf("%d", &i);

  for(j = 0; j < i; j++){
    printf("Sequencia %d = ", j);
    scanf("%d", &valores);
    soma = soma + valores;
  };

  printf("Soma das sequências: %d", soma);
  
  return 0;
}