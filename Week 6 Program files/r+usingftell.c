#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("message.txt","r+");
	char name[10];
	if(fptr!=NULL){
		printf("File opened successfully!\n");
		printf("Enter a name:");
		scanf("%s",name);
		fprintf(fptr,"%s",name);
		long currentPos = ftell(fptr);
        printf("Current position before using fseek: %ld\n", currentPos);
		fseek(fptr,0,SEEK_SET);
		long currentPost = ftell(fptr);
        printf("Current position after using fseek: %ld\n", currentPost);
		fgets(name,10,fptr);
		printf("Name in the file:%s",name);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
