#include <stdio.h>
#include <string.h>

void main(){
    // char string1[20]; //for not to read space
    char string1[20] = "Avimanyu Rimal";
    printf("Enter a string:");
    scanf("%s", string1);
    printf("The strlen length is:%d",strlen(string1));
}