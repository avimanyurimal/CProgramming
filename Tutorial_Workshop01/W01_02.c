#include <stdio.h>
int main(){
    int num, fact = 1;

    printf("Enter the number:");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++){
        fact *= i;

    }
    printf("Factorial of %d = %d", num, fact);

    return 0;
}