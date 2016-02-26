/*
Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti.
Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).
*/

#include <stdio.h>
#include <stdlib.h>
#define NEL 100


double media(int* input,int len){
    int i,sum=0;
    //sommo in sum i valori dell'array input
    for (i=0;i<len;++i){
        sum+=input[i];
    }
    return (double)sum/len;

}


int main(){
    int a[100];
    int i;

    for (i=0;i<100;++i){
        a[i]=(i+1)*3;
    }

    printf("%f\n",media(a,100));

    return(0);
}
