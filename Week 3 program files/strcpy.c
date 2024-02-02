#include <stdio.h>
#include <string.h>
void main(){
	char string1[10],string2[10];
	printf("Enter a string:");
	scanf("%s",string1);
	printf("String1:%s copied to string2:%s",strcpy(string2,string1),string1,string2);
}
