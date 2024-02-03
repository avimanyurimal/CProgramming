#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("message1.txt","a+");
	char name[10];
	if(fptr!=NULL){
		printf("File opened successfully!\n");
		printf("Enter a name:");
		scanf("%s",name);
		fprintf(fptr,"%s",name);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
