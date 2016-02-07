#include <stdio.h>
#define numel 20

void stampa_inverso(int a[], int len){
    int i;
    for (i=0;i<len;i++)
        printf("%d ",a[len-1-i]);
}

void main (){
    int a[]={2,4,3,7,9};
    int i;

    printf("Array: ");
    for (i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    stampa_inverso(a,5);
    printf("\n");


}
