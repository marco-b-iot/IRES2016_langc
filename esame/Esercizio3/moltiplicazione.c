/*
La seconda accetta due interi e restituisce il loro prodotto,
senza usare l’operatore *, ma basandosi sulla funzione somma precedentemente creata.
*/
#include "somma.h"

int moltiplica(int m1, int m2){
    int min, max, mul=0;
    //per limitare le somme calcolo il minimo
    min=(m1<m2)?m1:m2;
    max=(m1>m2)?m1:m2;
    //per min volte sommo il max in mul
    for (;min>0;--min){
        mul=somma(mul,max);
    }
    return mul;
}
