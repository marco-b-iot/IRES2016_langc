#include <stdio.h>
#define numel 20

void creaArray(int n[]){
    int i;
    int nel=sizeof(n)/sizeof(int);
    for (i=0;i<nel/*n[i]!='\0'*/;i++){
        n[i]=numel-i;
    }
}

void main (){
    int a[numel];
    int i;
    int nelem=sizeof(a)/sizeof(int);

    creaArray(a);
    printf("Array: ");
    for (i=0;i<nelem;i++){
        printf("%d ",a[i]);t
    }
    printf("\n");

}
