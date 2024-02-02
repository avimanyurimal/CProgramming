#include<stdio.h>
int main(){
	int a = 10;
	int *ptr;
	ptr = &a;
	int **ptr1;
	ptr1=&ptr;
	int ***ptr2;
	ptr2=&ptr1;
	//*ptr = 50;
	printf("The value of a:%d",a);
	printf("\nThe value of a:%d",*ptr);
	printf("\nThe value of a:%d",**ptr1);
	printf("\nThe value of a:%d",***ptr2);
	printf("\nThe memory address of a:%p",&a);
	printf("\nThe memory address of a:%p",ptr);
	printf("\nThe memory address of ptr:%p",&ptr);
	printf("\nThe memory address of ptr:%p",ptr1);
	printf("\nThe memory address of ptr1:%p",&ptr1);
	
	return 0;
} 

//int main(){
//	int a = 10,b=20;
//	int *ptr,*ptr1;
//	ptr =&a;
//	ptr1 =&b;
//	int sum = *ptr+*ptr1;
//	printf("The sum of two numbers:%d",sum);
//	return 0;
//}
