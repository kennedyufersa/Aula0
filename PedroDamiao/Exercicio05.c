#include<stdio.h>
#include<stdlib.h>

void numerosnaturais(){

    int cont,n,somaquat=0,somacubo=0;

    printf("Informe o numero ");
    scanf("%d",&n);
     
     //Soma dos numeros naturais da soma do quadrado
    for(cont=1;cont<=n;cont++){
        somaquat = pow(cont,2);
        printf("%d^2 = %d ", cont,somaquat);
    }
      printf("\n");

     //Soma dos numeros naturais da soma do cubo
    for(cont=1;cont<=n;cont++){
        somacubo = pow(cont,3);
        printf("%d^3 = %d ", cont,somacubo);
    }

}

int main(){
    numerosnaturais();
    return 0;
}