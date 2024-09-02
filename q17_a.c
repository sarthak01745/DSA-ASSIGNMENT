// Q.17(a) Create a structure for student data base with following
// members (Register number, Name, Age, CGPA). Write a C program
// to perform the following operations (i) Get user input for 5
// students record (ii) Find the student’s name with greatest
// CGPA. (Note: Find appropriate data structure and develop a C
// program).
#include <stdio.h>
#include <string.h>

struct Student {
    int regNumber;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student students[5];
    int n = 5;
    int index = 0;
    float maxCGPA = 0.0;

    // Get user input for 5 students
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Register Number: ");
        scanf("%d", &students[i].regNumber);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);  // to read string with spaces
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("\n");
    }

    // Find the student's name with the greatest CGPA
    for (int i = 0; i < n; i++) {
        if (students[i].cgpa > maxCGPA) {
            maxCGPA = students[i].cgpa;
            index = i;
        }
    }

    printf("Student with the greatest CGPA:\n");
    printf("Name: %s\n", students[index].name);
    printf("Register Number: %d\n", students[index].regNumber);
    printf("Age: %d\n", students[index].age);
    printf("CGPA: %.2f\n", students[index].cgpa);

    return 0;
}