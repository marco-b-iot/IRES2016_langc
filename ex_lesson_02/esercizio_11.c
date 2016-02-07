#include <stdio.h>
#define numel 20

void dividi(int* a, int* b,int len){
    int ai,bi=0;
    for (ai=0;ai<len;ai++){
        if (a[ai]%2)
            b[bi++]=a[ai];
    }
    for (ai=0;ai<len;ai++){
        if (!(a[ai]%2))
            b[bi++]=a[ai];
    }
}


void dividi2(int* a, int* b,int len){
    int ai,bf=len-1,bi=0;
    ai=0;
    while (bf>bi){
        if (!(a[len-1-ai]%2)){
            b[bf--]=a[len-ai-1];
        }
        if ((a[ai]%2)){
            b[bi++]=a[ai];
        }
        ai++;

    }
}

void stampa(int* a,int len){
    int i;
    for (i=0;i<len;i++){
            printf("%d ",a[i]);
        }
    printf("\n");

}
void main (int argc, int* argv){

    int a[]={2,4,7,3,2,9,5};
    int b[7],b1[7];
    //a=(int *)malloc(sizeof(int)*rip);
    dividi(a,b1,7);
    dividi2(a,b,7);
    stampa(a,7);
    printf( "\n");
    stampa(b,7);
    printf( "\n");
    stampa(b1,7);
    printf( "\n");


}

