#include <stdio.h>
int main (){
    FILE *fptr;
    fptr = fopen("file.txt","a");
    char address[20];
    long long int phonenumber;
    if(fptr != NULL){
        printf("File opened Sucessfully");
        printf("Enter your address");
        scanf("%s", address);
        printf("Enter your phone number");
        
        scanf("%lld", &phonenumber);

        fprintf(fptr, "Address:%s Phonenumber:%lld", address, phonenumber);
    }
    else {
        printf("File Cannot be open");
    }

    fclose(fptr);
    return 0;
}