#include <stdio.h>

int somma_dispari(int n){
    int i=0;
    int somma=0;
    for (i=0;i<n;i++){
        somma+=2*i+1;
    }
    return somma;
}

void main(){

    printf("La somma dei primi %d numeri dispari è %d\n",50,somma_dispari(50));
}
