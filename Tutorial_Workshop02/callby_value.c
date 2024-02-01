#include <stdio.h>

void modifyValues(int, int);

void modifyValues(int  a, int b) {
    a = 10;
    b = 20;
}

int main() {
    int a = 30, b = 40;

    // Call the function to modify values
    modifyValues(&a, &b);

    // Print the modified values of 'a' and 'b'
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
