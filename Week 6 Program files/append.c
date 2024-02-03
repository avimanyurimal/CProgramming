#include <stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("L5CG23.txt","a");
	char address[20];
	long long int phonenumber;
	if(fptr!=NULL){
		printf("File opened successfully\n");
		printf("Enter your address:");
		scanf("%s",address);
		printf("Enter your phone number:");
		scanf("%lld",&phonenumber);
		fprintf(fptr," Address:%s Phonenumber:%lld",address,phonenumber);
	}else{
		printf("File cannot be opened");
	}
	fclose(fptr);
}
