#include <stdio.h>

int somma(int a[]){
    int i=0, somma=0;
    int fine=sizeof(a)/sizeof(int);
    for (int i=0;i<fine;i++){
        if (a[i]>=0)
            somma+=a[i];
        else
            break;
    }
    /*
    while ((a[i]>0)&&(i<fine)){
        somma+=a[i++];
    }*/

    return somma;
}

void main(){

    int da_sommare[]={1,3,5,6,-1,2};
    printf("Somma= %d\n",somma(da_sommare,5));
}
