#include <stdio.h>

float media(int a[]){
    int i;
    int fine=sizeof(a)/sizeof(int);
    int somma=0;
    for (i=0;i<fine;i++){
        somma+=a[i];
    }
    printf("somma: %d",somma);
    return (float)somma/fine;
}

void main(){
    int da_sommare[]={2,4,6,-2,1};
    printf("Media= %f\n",media(da_sommare,5));
}
