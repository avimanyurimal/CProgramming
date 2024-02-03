#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("message.txt","r");
	char ch[100];
	if(fptr!=NULL){
		printf("File opened successfully!\n");
		while(!feof(fptr)){
		fgets(ch,100,fptr);
		printf("%s",ch);
	    }
		
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
