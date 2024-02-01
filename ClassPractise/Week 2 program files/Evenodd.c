//to check whether the given number is even or odd using function
#include <stdio.h>
void check(int);
void check(int n){
	if(n%2==0){
		printf("The given number is even");
	}else{
		printf("The given number is odd");
	}
}

void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	check(n);
}
