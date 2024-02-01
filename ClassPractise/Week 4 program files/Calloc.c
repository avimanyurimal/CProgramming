#include <stdio.h>
#include <stdlib.h>
void main(){
	int n,i;
	int *ptr;
	printf("Enter the size of an element:");
	scanf("%d",&n);
	//dynamic allocation
	ptr = (int*)calloc(n,sizeof(int));
	//user input
	for(i=0;i<n;i++){
		printf("Enter the element for index %d:",i);
		scanf("%d",ptr+i);
	}
	//printing the entered elements
	for(i=0;i<n;i++){
		printf("\nEntered elements are index:%d memory address:%d value:%d",i,ptr+i,*(ptr+i));
	}
	free(ptr);
}
