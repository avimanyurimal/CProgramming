#include <stdio.h>

int main() {
    int n, i, count = 0, total_sum = 0;

    // Input: Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input: Elements of the array
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count and sum numbers divisible by 7 and not by 2 and 3
    for (i = 0; i < n; i++) {
        if (arr[i] % 7 == 0 && arr[i] % 2 != 0 && arr[i] % 3 != 0) {
            count++;
            total_sum += arr[i];
        }
    }

    // Output: Count and Sum
    printf("Count of numbers divisible by 7 and not by 2 and 3: %d\n", count);
    printf("Sum of numbers divisible by 7 and not by 2 and 3: %d\n", total_sum);

    return 0;
}
