#include <stdio.h>
int main(){
   int j, sum = 0;

   printf("The sum of the numbers from 1 to 10:\n");

   for (j = 1; j <= 10; j++ ){
    sum = sum + j;
    printf("%d ", j);

   } 

   printf("\nThe sum is: %d" , sum);
   return 0;
}