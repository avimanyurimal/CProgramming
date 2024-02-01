#include <stdio.h>

void main(){
	int size;
	printf("Enter the size for an array:");
	scanf("%d",&size);
	int arr[size],i;
	printf("\nEnter the elements of an array:\n");
	for(i=0;i<size;i++){
		printf("Enter value for index %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEntered elements are:\n");
	for(i=0;i<size;i++){
		printf("Index:%d Value:%d\n",i,arr[i]);
	}
}
