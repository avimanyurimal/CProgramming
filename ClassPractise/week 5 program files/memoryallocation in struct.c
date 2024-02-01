#include <stdio.h>
#pragma pack(1)
struct memory{
	int a;
	char b[10];
	int c;
	char d;
};
void main(){
	struct memory a;
	printf("Total memory consumed by struct is:%d",sizeof(a));
}
