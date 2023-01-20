#include<stdio.h>
#include<stdlib.h>

void multiplo(){

    int cont,soma=0;

    for (cont = 7; cont <= 100; cont++){
         if(cont % 7 == 0){
             printf("%d ", cont);
             soma = soma + cont;
         }
         
        }
        printf("\n");
        printf("\nA soma dos numeros multiplos de 7 e = %d",soma); 
    
}

int main(){
    multiplo();
}