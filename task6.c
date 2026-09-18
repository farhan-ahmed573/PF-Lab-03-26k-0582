#include <stdio.h>

int main() {
    float floatValue;
    double doubleValue;

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);

    printf("\n========== OUTPUT ==========\n");

    printf("Float (Default): %f\n", floatValue);
    printf("Float (2 decimal places): %.2f\n", floatValue);
    printf("Float (4 decimal places): %.4f\n", floatValue);
    printf("Float (6 decimal places): %.6f\n", floatValue);

    printf("\nDouble (Default): %lf\n", doubleValue);
    printf("Double (2 decimal places): %.2lf\n", doubleValue);
    printf("Double (4 decimal places): %.4lf\n", doubleValue);
    printf("Double (6 decimal places): %.6lf\n", doubleValue);

    return 0;
}
