#include <stdio.h>
int sumofarray(int arr[],int size);
int sumofarray(int arr[],int size){
	int i,sum=0;
	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}
void main(){
	int size;
	printf("Enter the size of an array:");
	scanf("%d",&size);
	int arr[size],i;
	for(i=0;i<size;i++){
		printf("Enter the element for index %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEntered values are:");
	for(i=0;i<size;i++){
		printf("Index:%d Value:%d\n",i,arr[i]);
	}
	int sum=sumofarray(arr,size);
	printf("\nThe sum of array is:%d",sum);
}
