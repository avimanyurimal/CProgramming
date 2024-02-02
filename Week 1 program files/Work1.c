//write a program to convert celsius into fahrenheit and fahrenheit into celsius
int main(){
	float c, f;
	printf("Enter the celsius:");
	scanf("%f",&c);
	printf("Enter the Fahrenheit:");
	scanf("%f",&f);
	c = (f-32)*5/9;
	f = c*9/5+32;
	printf("After conversion of  fahrenheit to celsius: %f",c);
	printf("\nAfter conversion of celsius to fahrenheit: %f",f);
	return 0;
}
//or you can use if else another way of doing
//int main(){
//    float n;
//    int r;
//	printf("Enter a number:");
//	scanf("%f",&n);
//	printf("Enter 1 to change in celsius or 2 to change in fahrenheit:");
//	scanf("%d",&r);
//	if(r==1){
//		float c =(n-32)*5/9;
//		printf("celsius result is:%f",c);
//	}else if(r==2){
//		float f = n*9/5+32;
//		printf("fahrenheit result is:%f",f);
//	}
//	return 0;
//}

