#include <stdio.h>

struct student_info {
    char name[20];
    int rollno;
    char classgroup[10];
    char address[20];
};

int main() {
    struct student_info student1 = {"avimanyu", 23, "LG543GC", "Jhamsikhel"};
    struct student_info student2 = {.address = "nijg", .name = "avimanyu", .classgroup = "l43vdv", .rollno = 21};

    printf("\nStudent1 Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Rollno: %d\n", student1.rollno);
    printf("Classgroup: %s\n", student1.classgroup);
    printf("Address: %s\n", student1.address);

    printf("\nStudent2 Information:\n");
    printf("Name: %s\n", student2.name);
    printf("Rollno: %d\n", student2.rollno);
    printf("Classgroup: %s\n", student2.classgroup);
    printf("Address: %s\n", student2.address);

    return 0;
}
