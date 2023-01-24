#include <stdio.h>

int main(){
   
    int m, n;

    printf("Digite o valor para 'm': ");
    scanf("%d", &m);
    printf("Digite o valor para 'n': ");
    scanf("%d", &n);
    printf("\n");

    if(n == 1){
        printf(" f(%d,%d) = m + 1\n ", m, n);
        printf("\nf(%d,%d) = (%d, %d) \n", m, n, m + 1, n);
    }

    else if(m == 1){
        printf(" f(%d,%d) = n + 1\n ", m, n);
        printf("\nf(%d,%d) = (%d, %d) \n",m, n, m, n + 1);
    }

    else if(m > 1 && n > 1){
        printf("f(%d,%d) = f(%d,%d-1) + f(%d-1,%d)\n ",m, n, m, n, m, n);
        printf("\nf(%d,%d) = (%d, %d)", m, n, m + (m - 1), (n - 1) + n);
    }
    else{
    printf(" f(%d,%d) = (%d, %d)", m, n, m, n);
    }

    return 0;
    
}
