//Write a program to sum two number-> user input
#include <stdio.h>
int main(){
	int a,b,sum;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	sum = a+b;
	printf("Sum of two numbers is:%d",sum);
	return 0;
}
//or another way of doing
//#include <stdio.h>
//int main(){
//	int a,b,sum;
//	printf("Enter two numbers:");
//	scanf("%d %d",&a,&b);
//	sum = a+b;
//	printf("Sum of %d and %d is:%d",a,b,sum);
//	return 0;
//}
