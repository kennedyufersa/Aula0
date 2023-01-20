#include<stdio.h>
#include<stdlib.h>

int primos(int n){

    int cont;
    int divisores=0;

   for(cont = 1; cont <= n; cont++){
        if(n % cont == 0){
            divisores++;
        }
    }
     if(divisores == 2){
        return 1;
     }
     else{
         return 0;
     }
}

int main(){
    int i;
   for(i = 1; i <= 100; i++){
        if(primos(i) == 1){
           printf("%d ", i);
                 
        }
    }
    return 0;
}