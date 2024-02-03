#include <stdio.h>
void main(){
	FILE *fptr, *fptr1;
	char data[1000];
	fptr= fopen("message.txt","r");
	if(fptr==NULL){
		perror("File not found");
	}
	fptr1=fopen("newmessage.txt","w");
	if(fptr1==NULL){
		perror("File cannot be opened");
	}
	while(fgets(data,1000,fptr)){
		fputs(data,fptr1);
	}
	printf("Data copied successfully to your new file");
	fclose(fptr);
	fclose(fptr1);
	
}
