#include <stdio.h>
#include <string.h>

void main(){
    char string1[20],string2[20];
    printf("Enter the string1:");
    scanf("%s",string1);
    printf("String1 get copied to string2:%s",strcpy(string2,string1));
}