#include <stdio.h>
#include <string.h>
void main(){
	char string1[10],string2[10];
	printf("Enter string1:");
	scanf("%s",string1);
	printf("Enter string2:");
	scanf("%s",string2);
	printf("String 1 and 2 compared result:%d",strcmp(string1,string2));
}
