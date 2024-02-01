#include <stdio.h>

//declaring function
double AreaofRectangle(double length, double breadth);

int main() {
    double length, breadth;

    printf("Enter the length of rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%lf", &breadth);

    double area = calculateRectangleArea(length, breadth);

    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;
}

double AreaofRectangle(double length, double breadth) {
    
    double area = length * breadth;
    return area;
}
