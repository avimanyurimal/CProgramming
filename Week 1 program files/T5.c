//write a progam to find greatest between two numbers->user input
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("a is greater");
	}else{
		printf("b is greater");
	}
	return 0;
}
