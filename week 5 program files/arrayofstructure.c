#include <stdio.h>

//without using struct tag
struct{
	char name[20];
	int age;
	char classgroup[10];
	char address[20];
}student;
void main(){
	snprintf(student.name,sizeof(student.name),"Jenny");
	student.age = 23;
	snprintf(student.classgroup,sizeof(student.classgroup),"L5CG1");
	snprintf(student.address,sizeof(student.address),"Jhamsikhel");
	printf("\n student information:\n");
	printf("name:%s age:%d classgroup:%s address:%s",student.name,student.age,student.classgroup,student.address);
}



