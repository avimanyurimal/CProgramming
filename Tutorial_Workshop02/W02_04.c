#include <stdio.h>
#include <math.h>

double velocityCalc(double, double, double, double);

double velocityCalc(double v, double u, double a, double t) {
    double result;

    if (isnan(v)) {
        result = u + a * t;
        printf("Final velocity: %lf m/s\n", result);
    } else if (isnan(u)) {
        result = v - a * t;
        printf("Initial velocity: %lf m/s\n", result);
    } else if (isnan(t)) {
        if (a == 0) {
            printf("Error: Acceleration 'a' cannot be zero for time calculation.\n");
            return 0;
        }
        result = (v - u) / a;
        printf("Time: %lf sec\n", result);
    }

    return result;
}

int main() {
    double v, u, a, t;

    printf("Enter v, u, a, and t: ");
    scanf("%lf %lf %lf %lf", &v, &u, &a, &t);

    // Call the function and print the result
    double calculatedValue = velocityCalc(v, u, a, t);

    // Consume the newline character in the input buffer
    while (getchar() != '\n');

    // Add a prompt to wait before program termination
    printf("\nPress Enter to exit...");
    getchar(); // Read the Enter key
    return 0;
}

