#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, i;
    int *ptr;
    printf("Enter the size");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    for (i = 0; i < n; i++){
        printf("Enter the element for index %d:" , i);
        scanf("%p",ptr+i);
    }

    printf("\n Entered elements are:");
    for(i = 0; i < n; i++){
        printf("Index:%d Memory address:%p value:%d",i,ptr+i,*(ptr+i));

    }
    free(ptr);

}