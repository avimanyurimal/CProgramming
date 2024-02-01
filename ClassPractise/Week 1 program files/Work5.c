//Write a program to print out all triangular numbers from 1 up to nth term.
#include <stdio.h>
int main(){
	//declaring four variables where n is the number of traingular series to be printed, i is the starting number of the series i.e 1 
	//here j and k is declared as well as initialized with value 1
	int n, i, j=1,k=1;
	//printing statement asking the user to enter a number
	printf("Enter a number:");
	//taking user input i.e. n 
	scanf("%d",&n);
	// For each iteration increase j by 1
    // and add it into k
	for (i=1; i<=n; i++){
		printf("%d\n",k);
		j = j +1;//increasing the value of j by 1
		k = k +j;//adding values of j into k and updating k
	}
	return 0;
}
