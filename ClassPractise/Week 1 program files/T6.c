//write a progam to find greatest between three numbers->user input
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("a is greater");
	}else if(b>a && b>c){
		printf("b is greater");
	}else{
		printf("c is greater");
	}
	return 0;
}
