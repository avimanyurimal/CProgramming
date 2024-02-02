//to calculate simple interest where p and t is an integer and r is in float
#include <stdio.h>
int main(){
	int p,t;
	float r, simpleinterest;
	printf("Enter principle:");
	scanf("%d",&p);
	printf("Enter time:");
	scanf("%d",&t);
	printf("Enter rate:");
	scanf("%f",&r);
	simpleinterest = (p*t*r)/100;
	printf("The simple interest is:%f", simpleinterest);
	return 0;
}
