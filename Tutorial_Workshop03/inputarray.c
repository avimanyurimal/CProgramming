#include <stdio.h>
void main(){
    int size,i;
    int a[size];
    printf("Enter the size of  any array:");
    scanf("%d",&size);
    printf("Enter the element of an array:");
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    printf("Entered element are");
    for (i=0;i<size;i++){
        printf("\nIndex:%d value:%d",i,a[i]);
    }
}