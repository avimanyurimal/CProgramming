
#include <stdio.h>

int main() {
    char ch;

    printf("Enter characters. Press Enter to finish.\n");

    while ((ch = getchar()) != 13) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        
        printf("%c", ch);
    }

    printf("\n");

    return 0;
}
