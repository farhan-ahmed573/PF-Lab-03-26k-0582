#include <stdio.h>

int main() {
    int number;
    unsigned int positiveNumber;
    float floatValue;
    double doubleValue;
    char character;
    long int longNumber;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter an unsigned integer: ");
    scanf("%u", &positiveNumber);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);

    printf("Enter a character: ");
    scanf(" %c", &character);

    printf("Enter a long integer: ");
    scanf("%ld", &longNumber);

    printf("\n========== OUTPUT ==========\n");

    printf("Integer (Decimal): %d\n", number);
    printf("Integer (Octal): %o\n", number);
    printf("Integer (Hex Lowercase): %x\n", number);
    printf("Integer (Hex Uppercase): %X\n", number);

    printf("Unsigned Integer: %u\n", positiveNumber);

    printf("Float using %%f: %f\n", floatValue);
    printf("Float using %%e: %e\n", floatValue);
    printf("Float using %%g: %g\n", floatValue);

    printf("Double: %lf\n", doubleValue);
    printf("Character: %c\n", character);
    printf("Long Integer: %ld\n", longNumber);

    return 0;
}
