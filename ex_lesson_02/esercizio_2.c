#include <stdio.h>

int somma(int a[],int fine){
    int i=0, somma=0;
    while ((a[i]>0)&&(i<fine)){
        somma+=a[i++];
    }
    return somma;
}

void main(){

    int da_sommare[]={1,3,5,6,-1,2};
    printf("Somma= %d\n",somma(da_sommare,5));
}
