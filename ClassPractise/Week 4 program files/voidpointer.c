#include <stdio.h>
#include <stdlib.h>
void  main(){
	void *a,*b,*c;
	a = (int*) malloc (1*sizeof(int));
	b = (char*) malloc (1*sizeof(char));
	c = (float*) malloc (1*sizeof(float));
	printf("Enter for a:");
	scanf("%d",a);
	printf("Enter for b:");
	scanf(" %c",b);
	printf("Enter for c:");
	scanf("%f",c);
	printf("\nThe value of a:%d",*(int*)a);
	printf("\nThe value of b:%c",*(char*)b);
	printf("\nThe value of c:%f",*(float*)c);
	free(a);
	free(b);
	free(c);
}
