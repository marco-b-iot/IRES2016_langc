#include <stdio.h>
#define numel 20

void creaArray(int n[]){
    int i;
    for (i=0;i<numel;i++){
        n[i]=numel-i;
    }
}

void main (){
    int a[numel];
    int i;
    creaArray(a);
    printf("Array: ");
    for (i=0;i<numel;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

}
