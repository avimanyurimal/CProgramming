#include <stdio.h>
struct {
     char name[20];
     int rollno;
     char classgroup[10];
     char address[20];
}student1;
void main(){
    snprintf(student1.name, sizeof(student1.name), "avi");

    student1.rollno=21;
    snprintf(student1.address,sizeof(student1.address),"Jhamsikhel");
    printf("\nStudent1 Information:\n");
    printf("name.%s\n",student1.name);
    printf("Rollno.%d\n",student1.rollno);
    printf("classgroup.%s\n",student1.classgroup);
    printf("Address.%s\n",student1.address);
}