#include <stdio.h>
void main (){
    FILE *fptr;
    char ch = 'a';
    fptr = fopen("file.txt","w");
    if(fptr != NULL){
        printf("File opened Sucessfully");
        fputc(ch, fptr);
    }
    else{
        printf("File Cannot ber open");
    }

    fclose(fptr);
    return 0;
}