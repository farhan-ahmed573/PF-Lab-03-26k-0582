#include <stdio.h>

int main() {
    char ch1, ch2, ch3;

    printf("Enter first character: ");
    ch1 = getchar();

    getchar(); // consume newline

    printf("Enter second character: ");
    ch2 = getchar();

    getchar(); // consume newline

    printf("Enter third character: ");
    ch3 = getchar();

    printf("\n========== OUTPUT ==========\n");
    printf("First character: ");
    putchar(ch1);

    printf("\nSecond character: ");
    putchar(ch2);

    printf("\nThird character: ");
    putchar(ch3);

    printf("\n");

    return 0;
}
