#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i;
	int *ptr;
	printf("Enter the size:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Memory cannot be allocated\n");
		exit(1);
	}
	for(i=0;i<n;i++){
		printf("Enter element for index %d:",i);
		scanf("%d",ptr+i);
	}
	printf("\nEntered elements:\n");
	for(i=0;i<n;i++){
		printf("\nIndex:%d memoryaddress:%d value:%d",i,ptr+i,*(ptr+i));
	}
	free(ptr);
}

