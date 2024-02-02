//print natural numbers from 1 to 100
#include <stdio.h>

//int main(){
//	int i;
//	for(i=1;i<=100;i++){
//		
//		printf("%d\n",i);
//	
//	}
//	return 0;
//}

//to print even numbers only
int main(){
	int i;
	for(i=1;i<=100;i++){
		//if you want to only print out even numbers
		if(i%2==0){
		printf("%d\n",i);
		}
	}
	return 0;
}
