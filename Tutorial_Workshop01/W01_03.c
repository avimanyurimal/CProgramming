#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Triangular numbers up to %d terms:\n", n);

    for (int i = 1, triangularNumber = 0; i <= n; printf("%d ", triangularNumber += i++));

    printf("\n");

    return 0;
}
