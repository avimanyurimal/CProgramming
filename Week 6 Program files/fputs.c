#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("L5CG23.txt","w");
	char ch[10]="Avimanyu";
	if(fptr!=NULL){
		printf("File opened successfully");
		fputs(ch,fptr);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
