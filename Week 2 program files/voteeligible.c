//To check a person age eligbile for voting or not using function
#include <stdio.h>
void checkeligible(int);
void checkeligible(int age){
	if(age>=18){
		printf("You are eligible for voting");
	}else{
		printf("You are not eligible for voting");
	}
}

void main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	checkeligible(age);
}
