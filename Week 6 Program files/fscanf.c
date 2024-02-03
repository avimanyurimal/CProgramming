#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("file.txt","r");
	char name[10];
	int age;
	char address[20];
	if(fptr!=NULL){
		printf("File opened successfully!\n");
		fscanf(fptr,"Name:%s Age:%d Address:%s",name,&age,address);
		printf("Name:%s Age:%d Address:%s",name,age,address);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
