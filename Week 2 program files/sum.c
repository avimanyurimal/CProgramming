//sum of two number using function
#include <stdio.h>
int squarenum(int);
int squarenum(int num){
	int square = num*num;
	return square;
}

void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int square =squarenum(num);
	printf("The square of %d is %d",num,square); 
}
