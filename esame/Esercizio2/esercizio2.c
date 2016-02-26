/*
Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza
crei un terzo array che contenga i valori dei precedenti array intervallati tra di loro (partendo dal
primo elemento dell’array a).
Testare la funzione creando un array contenente i primi 100 numeri interi pari [0,2,4,6,8,...] e un
 array contenente i primi 100 numeri interi dispari [1,3,5,7,9,11,13,...].
Stampare a console l’array risultate dalla chiamata alla funzione zip.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void zip(int* a1,int* a2, int* ret,int len){
    int i;

    for (i=0;i<len;++i){
        ret[2*i]=a1[i];
        ret[2*i+1]=a2[i];
    }
}


int main(){
    int pari[100], dispari[100],res[200];
    int i;
    //riempio gli array pari(a1) e dispari
    for (i=0;i<100;++i){
        pari[i]=2*i;
        dispari[i]=2*i+1;

    }

    zip(pari,dispari, res, 100);

    for (i=0;i<sizeof(res)/sizeof(int);++i){
            printf("%d ", res[i]);
    }

    return(0);
}
