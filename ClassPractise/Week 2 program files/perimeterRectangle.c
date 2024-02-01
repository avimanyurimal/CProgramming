//calculating the perimeter of the rectangle using function
#include <stdio.h>
int perimeterRectangle(int,int);
int perimeterRectangle(int length, int breadth){
	int perimeter = 2*(length+breadth);
	return perimeter;
}

void main(){
	int length, breadth;
	printf("Enter length and breadth:");
	scanf("%d %d",&length,&breadth);
	int perimeter= perimeterRectangle(length,breadth);
	printf("Perimeter of a rectangle is:%d",perimeter);
}
