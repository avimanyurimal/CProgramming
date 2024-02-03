#include <stdio.h>
typedef struct employee{
	char name[10];
	int age;
	int salary;
}empl;

void main(){
	empl emp1;
	printf("Enter name:");
	scanf("%29s",emp1.name);
	printf("Enter age:");
	scanf("%d",&emp1.age);
	printf("Enter salary:");
	scanf("%d",&emp1.salary);
	printf("employeename:%s, age:%d, salary:%d",emp1.name,emp1.age,emp1.salary);	
}


