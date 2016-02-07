#include <stdio.h>

int somma(int a,int b){
    int somma,min,i;

    min=(a<b)?a:b;
    b=(min<b)?b:a;

    for (i=min;i<=b;i++){
        somma+=i;
    }
    return somma;
}

void main(){
    int a,b;
    printf("Dammi gli estremi");
    scanf("%d %d",&a, &b);
    printf("La somma è %d\n",somma(a,b));
}
