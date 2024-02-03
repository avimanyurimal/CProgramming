#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("L5CG23.txt","w");
	char ch='a';
	if(fptr!=NULL){
		printf("File opened successfully");
		fputc(ch,fptr);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
