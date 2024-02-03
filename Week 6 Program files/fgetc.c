#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("message.txt","r");
	char ch;
	if(fptr!=NULL){
		printf("File opened successfully!");
		ch=fgetc(fptr);
		printf("Character form a file:%c",ch);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
