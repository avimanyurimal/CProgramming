#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("message.txt","w");
	char message1[50]="I love C programming";
	char message2[50]="I love coding in c";
	if(fptr!=NULL){
		printf("File opened successfully!");
		fputs(message1,fptr);
		fputs("\n",fptr);
		fputs(message2,fptr);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
