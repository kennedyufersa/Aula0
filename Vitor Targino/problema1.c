#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j=0,k,u;
    scanf("%i",&i);
    for (k = 0; k < i; k++){
        scanf("%i",&u);
        j=j+u;
    }
    j=j/i;
    printf("%i",j);
}
