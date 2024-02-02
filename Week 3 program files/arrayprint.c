#include <stdio.h>
void main(){
	int arr[5] = {1,2,3,4,5};
	int i;
	//simply printing all the values stored in the array list arr
	for(i=0;i<5;i++){
		printf("Index:%d value:%d\n",i,arr[i]);
	}
	//ascessing value based on their index
	printf("\nIndex 0 value:%d",arr[0]);
	printf("\nIndex 1 value:%d",arr[1]);
	printf("\nIndex 2 value:%d",arr[2]);
	printf("\nIndex 3 value:%d",arr[3]);
	printf("\nIndex 4 value:%d",arr[4]);
}
