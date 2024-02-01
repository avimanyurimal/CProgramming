#include <stdio.h>
#include <string.h>

void main(){
    char string1[20], string2[20];
    printf("Enter string1:");
    scanf("%s", string1);
    printf("Enter string2:");
    scanf("%s",string2);
    printf("String1 and string2 combined :%s",strcat(string1,string2));
}