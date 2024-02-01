#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    
    printf("Character in lowercase: %c\n", ch);

    return 0;
}
