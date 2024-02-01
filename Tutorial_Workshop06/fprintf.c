#include <stdio.h>
void main (){
    FILE *fptr;
    fptr = fprintf("file.txt","w");
    char name[10];
    int age;
    if(fptr != NULL){
        printf("File opened Sucessfully");
        printf("Enter your name");
        scanf("%s", &name);
        printf("Enter your age");
        scanf("%d", &age);
        fprintf(fptr, "Name:%s Age:%d ", name, age);
    }
    else{
        printf("File Cannot ber open");
    }

    fclose(fptr);
    return 0;
}