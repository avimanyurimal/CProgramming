#include <stdio.h>

struct student_info {
    char name[20];
    int rollno;
    char classgroup[10];
    char address[20];
};

int main() {
    struct student_info student[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%19s", student[i].name);
        printf("Enter rollno for student %d: ", i + 1);
        scanf("%d", &student[i].rollno);
        printf("Enter classgroup for student %d: ", i + 1);
        scanf("%9s", student[i].classgroup);
        printf("Enter address for student %d: ", i + 1);
        scanf("%19s", student[i].address);
    }

    for (i = 0; i < 3; i++) {
        printf("\nStudent Information for student %d:\n", i + 1);
        printf("Name: %s\n", student[i].name);
        printf("Roll no: %d\n", student[i].rollno);
        printf("Classgroup: %s\n", student[i].classgroup);
        printf("Address: %s\n", student[i].address);
    }

    return 0;
}
