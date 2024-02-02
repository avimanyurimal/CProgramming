//call by reference example
#include <stdio.h>
int value(int *, int *);
int value(int *a, int *b){
	*a = 10;
	*b = 20;
}
void main(){
	int a = 30, b = 40;
	value(&a,&b);
	printf("The value of a:%d and b:%d",a,b);
}
