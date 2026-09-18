#include <stdio.h>

int main() {
    char name[50];
    int rollNumber;
    char section;
    char topic[50];
    char sampleChar;
    float number;

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter your section: ");
    scanf(" %c", &section);

    printf("Enter a C topic: ");
    scanf(" %[^\n]", topic);

    printf("Enter a sample character: ");
    scanf(" %c", &sampleChar);

    printf("Enter a floating point number: ");
    scanf("%f", &number);

    printf("\n========================================\n");
    printf("          PROGRAMMING FUNDAMENTALS\n");
    printf("========================================\n");

    printf("Name        : %s\n", name);
    printf("Roll Number : %d\n", rollNumber);
    printf("Section     : %c\n", section);
    printf("C Topic     : %s\n", topic);
    printf("Sample Char : ");
    putchar(sampleChar);
    printf("\n");

    printf("Float using %%f : %f\n", number);
    printf("Float using %%e : %e\n", number);
    printf("Float using %%g : %g\n", number);
    printf("Precision      : %.2f\n", number);

    printf("\n\tThank you!\n");
    printf("Keep learning C programming.\n");

    return 0;
}
