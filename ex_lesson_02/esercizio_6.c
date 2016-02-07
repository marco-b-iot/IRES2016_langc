#include <stdio.h>
#include "esercizio_6.h"

int moltiplica(int a,int b){
    int mul=0,min,i;
    min=(a<b)?a:b;
    b=(min<b)?b:a;
    for (i=0;i<min;i++){
        mul+=b;
    }
    return mul;
}

int moltiplica_rec(int a, int b){
    if (a==1){
        return b;
    }else if (a%2){
        return b+moltiplica_rec(a-1,b);
    }else {
        int t=moltiplica_rec(a/2,b);
        return t+t;

    }


}

void main(){
    int a,b;
    printf("Dammi i valori");
    scanf("%d %d",&a, &b);
    printf("La moltiplicazione è %d\n",moltiplica(a,b));
    printf("La moltiplicazione è %d\n",moltiplica_rec(a,b));
}
