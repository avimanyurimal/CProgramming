#include <stdio.h>
struct sum{
	int a;
	int b;
};

int calculatesum (int a,int b){
	int sum =a+b;
	return sum;
}

void main(){
	struct sum numbers;
	printf("Enter a:");
	scanf("%d",&numbers.a);
	printf("Enter b:");
	scanf("%d",&numbers.b);
	int sum=calculatesum(numbers.a,numbers.b);
	printf("The sum of two numbers:%d",sum);
	
}


