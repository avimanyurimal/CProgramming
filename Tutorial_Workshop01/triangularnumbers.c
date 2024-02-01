#include <stdio.h>

int main() {
    int n, triangularNumber;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    triangularNumber = 0;

    for (int i = 1; i <= n; i++) {
        triangularNumber += i;
        printf("%d ", triangularNumber);
    }

    return 0;
}
