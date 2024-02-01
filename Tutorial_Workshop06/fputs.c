#include <stdio.h>
void main (){
    FILE *fptr;
    fptr = fopen("file.txt","w");
    char ch[10] = "jenny";
    if(fptr != NULL){
        printf("File opened Sucessfully");
        fputs(ch, fptr);
    }
    else{
        printf("File Cannot ber open");
    }

    fclose(fptr);
    return 0;
}