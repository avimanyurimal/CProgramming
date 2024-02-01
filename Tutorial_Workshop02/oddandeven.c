#include <stdio.h>

void checkOddEven(int number) {
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    checkOddEven(num);

    return 0;
}
