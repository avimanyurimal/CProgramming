#include <stdio.h>

//using structtag 
struct StudentInfo{
	char name[20];
	int age;
	char classgroup[10];
	char address[20];
};
void main(){
	struct StudentInfo s1={"Jenny",23,"L5CG8","Jhamsikhel"};
	struct StudentInfo s2={.age=20,.address="Maharajgunj",.name="Yashwont",.classgroup="L5CG8"};
	printf("\n student information:\n");
    printf("name:%s age:%d classgroup:%s address:%s",s1.name,s1.age,s1.classgroup,s1.address);
    printf("\nname:%s age:%d classgroup:%s address:%s",s2.name,s2.age,s2.classgroup,s2.address);
}



