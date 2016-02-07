#include <stdio.h>
#define numel 20

void ripeti(int* a, int el,int len){
    int i;
    for (i=0;i<len;i++)
        //*(a+1)=el;
        a[i]=el;
}

void stampa(int* a,int len){
    int i;
    for (i=0;i<len;i++){
            printf("%d ",a[i]);
        }
    printf("\n");

}
void main (int argc, int* argv){
    int el,rip;

    printf("Dammi 2 numeri:");
    scanf("%d %d",&el,&rip);

    int a[rip];
    //a=(int *)malloc(sizeof(int)*rip);
    ripeti(a,el,rip);
    stampa(a,rip);
    printf( "\n");

}
