#include <stdio.h>
struct Date{
	int year;
	int month;
	int day;
};
struct student{
	char name[20];
	int rollnumber;
	char classgroup[10];
	char address[20];
	struct Date dob;
};

void main(){
	struct student std;
	printf("Enter student name:");
	scanf("%19s",std.name);
	printf("Enter roll number:");
	scanf("%d",&std.rollnumber);
	printf("Enter classgroup:");
	scanf("%9s",std.classgroup);
	printf("Enter address:");
	scanf("%19s",std.address);
	printf("Enter Date of birth YYYY MM DD:");
	scanf("%d %d %d",&std.dob.year,&std.dob.month,&std.dob.day);
	
	//printing information
	printf("\n Student Information:\n");
	printf("Name:%s\n",std.name);
	printf("RollNumber:%d\n",std.rollnumber);
	printf("Classgroup:%s\n",std.classgroup);
	printf("Address:%s\n",std.address);
	printf("DOB:%d-%d-%d",std.dob.year,std.dob.month,std.dob.day);
}
