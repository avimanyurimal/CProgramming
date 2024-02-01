# include <stdio.h>

int main() {
    int a=10;
    int *ptr;
    ptr = &a;
    int **ptr1;
    ptr1 = &ptr;
    int ***ptr2;
    ptr2 = &ptr1;

    printf("The value of a: %d\n",a);
    printf("The value of a: %d\n",*ptr);
    printf("The value of a: %d\n",**ptr1);
    printf("The value of a: %d\n",***ptr2);
    printf("The memory address of a: %d\n",&a);
    printf("The memory address of a: %d\n",ptr);
    printf("The memory address of ptr: %d\n",&ptr);
    printf("The memory address of a: %d\n",*ptr1);
    printf("The memory address of ptr: %d",&ptr);
    printf("The memory address of ptr: %d\n",***ptr2);
    return 0;
}


// double pointers

// #include <stdio.h>
// void main(){
//     int a = 20;
//     int b = 10;
//     int *ptr, *ptr1;
//     ptr = &a;
//     ptr1 = &b;

//     int sum = *ptr + *ptr1;
//     printf("the sum of two num:%d",sum);
// }