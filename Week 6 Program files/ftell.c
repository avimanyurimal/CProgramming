#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("message.txt", "r");

    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    long currentPos = ftell(fptr);
    printf("Current position: %ld\n", currentPos);

    fclose(fptr);

    return 0;
}

