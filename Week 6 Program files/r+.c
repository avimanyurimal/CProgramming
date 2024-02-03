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
		fseek(fptr,0,SEEK_SET);
		fgets(name,10,fptr);
		printf("Name in the file:%s",name);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
