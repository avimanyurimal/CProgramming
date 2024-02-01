#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, i;
    int *ptr;
    printf("Enter the size");
    scanf("%d", &n);
    ptr = (int*)malloc(n* sizeof(int));
    for (i = 0; i < n; i++){
        printf("Enter the element for index %d:" , i);
        scanf("%p",ptr+i);
    }

    printf("\n Entered elements are:");
    for(i = 0; i < n; i++){
        printf("Index:%d Memory address:%p value:%d",i,ptr+i,*(ptr+i));

    }
    int new_size;
    printf("\nEnter the additional size:");
    scanf("%d",&new_size);
    ptr=(int*)realloc(ptr,new_size*sizeof(int));
    for (i=n;i<n+new_size;i++){
        printf("Enter the element for index %d:",i);
        scanf("%d",ptr+i);
    }
    printf("The final array is:\n");
    for(i=0;i<new_size;i++){
        printf("\nIndex:%d memoryaddress:%d value:%d",i,ptr+i,*(ptr+i));
    }
    free(ptr);

}