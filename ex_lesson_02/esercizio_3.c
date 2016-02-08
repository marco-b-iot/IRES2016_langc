#include <stdio.h>

int somma_dispari(int n){
    int i=0;
    int somma=0;
    for (i=1;i<=n;i+=2){
        somma+=i;
    }
    return somma;
}

void main(){

    printf("La somma dei primi %d numeri dispari è %d\n",50,somma_dispari(50));
}
