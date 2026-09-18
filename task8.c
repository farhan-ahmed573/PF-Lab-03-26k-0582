#include <stdio.h>

int main() {
    char name[50];
    char city[50];
    char university[100];
    char department[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your city: ");
    fgets(city, sizeof(city), stdin);

    printf("Enter your university: ");
    fgets(university, sizeof(university), stdin);

    printf("Enter your department: ");
    fgets(department, sizeof(department), stdin);

    printf("\n========== STUDENT INFORMATION ==========\n");
    printf("Name       : ");
    puts(name);

    printf("City       : ");
    puts(city);

    printf("University : ");
    puts(university);

    printf("Department : ");
    puts(department);

    return 0;
}
