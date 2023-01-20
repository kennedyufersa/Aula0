#include<stdio.h>
#include<stdlib.h>

//celcius para fahrenheit
void temperatura(float c,float f){
    int t,cont;

    printf("Informe a quantidade da temperatura ");
    scanf("%d",&t);

    for(cont=0;cont<t;cont++){
        printf("informe a temperatura ");
        scanf("%f", &c);
        f = (c * 1.8) + 32;
        printf("A conversao de celsius para fahrenheit = %.1f\n",f);   
    }     
}

int main(){
     float cl, fh;
     
     temperatura(cl, fh);

     return 0;
}