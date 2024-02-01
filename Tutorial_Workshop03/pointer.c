#include <stdio.h>
#include <string.h>
int main (){
    int a = 45;
    int *ptr;
    ptr = &a;
    printf("value of *ptr:%d", *ptr);
    printf("\n Memory address of ptr:%p",&ptr);
    printf("\n Memory address of a:%p",&a);
    printf("\n Memory address of ptr:%p",ptr);
    return 0;
}



