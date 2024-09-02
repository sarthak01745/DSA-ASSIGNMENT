// Q.14 In a classroom, the teacher wants to create a list of
// students who have submitted their assignments. As students
// submit their work, the teacher needs to add each student's name
// to the list in the order of submission. Help the teacher by
// guiding them on how to use a proper data structure to insert
// each student's name into the list as they submit their
// assignment. Write a C program that uses an array to manage the
// list and demonstrates how to insert new student names into the
// array.
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

int main() {
    char studentList[MAX_STUDENTS][NAME_LENGTH];
    int studentCount = 0;
    char studentName[NAME_LENGTH];

    while (studentCount < MAX_STUDENTS) {
        printf("Enter student name (or 'exit' to stop): ");
        gets(studentName);

        if (strcmp(studentName, "exit") == 0) {
            break;
        }

        strcpy(studentList[studentCount], studentName);
        studentCount++;
    }

    printf("\nList of students who have submitted their assignments:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d. %s\n", i + 1, studentList[i]);
    }

    return 0;
}