#include <stdio.h>
#define numel 20

void inverti(int a[], int[] b,int len){
    int i;
    for (i=0;i<len;i++)
        b[i]=a[len-1-i];
}

void stampa(int[] a,int len){
    int i;
    for (i=0;i<len;i++){
            printf("%d ",a[i]);
        }
    printf("\n");

}
void main (){
    int a[]={2,4,3,7,9};
    int b[5];
    int i;

    inverti(a,b,5);
    stampa(a,5);
    stampa(b,5);

    printf( "\n");

}
