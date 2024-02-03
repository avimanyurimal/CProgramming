#include <stdio.h>
struct student{
	int age;
	int rollnumber;
};

int main(){
	struct student std = {23,1};
	struct student *ptr;
	ptr = &std;
	printf("Age and roll of the student:%d,%d",ptr->age,ptr->rollnumber);
	printf("\nAge and roll of the student:%d,%d",(*ptr).age,(*ptr).rollnumber);
	return 0;
}


