#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 50
#define MAX_GRADES 5

struct Student {
    int id;
    char name[50];
    int grades[MAX_GRADES];
    int numGrades;
};

struct Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents < MAX_STUDENTS) {
        printf("Enter student ID: ");
        scanf("%d", &students[numStudents].id);
        printf("Enter student name: ");
        scanf("%s", students[numStudents].name);
        students[numStudents].numGrades = 0;
        printf("Student added successfully!\n");
        numStudents++;
    } else {
        printf("Maximum number of students reached!\n");
    }
}

void enterGrades() {
    int id, i;
    printf("Enter student ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            printf("Enter grades for %s:\n", students[i].name);
            for (int j = 0; j < MAX_GRADES; j++) {
                printf("Enter grade %d: ", j + 1);
                scanf("%d", &students[i].grades[j]);
            }
            students[i].numGrades = MAX_GRADES;
            printf("Grades entered successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

void displayGrades() {
    int id, i;
    printf("Enter student ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            printf("Grades for %s:\n", students[i].name);
            for (int j = 0; j < students[i].numGrades; j++) {
                printf("Grade %d: %d\n", j + 1, students[i].grades[j]);
            }
            return;
        }
    }
    printf("Student not found!\n");
}

void calculateAverage() {
    int id, i, sum = 0;
    printf("Enter student ID: ");
    scanf("%d", &id);
    
    for (i = 0; i < numStudents; i++) {
        if (students[i].id == id) {
            for (int j = 0; j < students[i].numGrades; j++) {
                sum += students[i].grades[j];
            }
            float average = (float)sum / students[i].numGrades;
            printf("Average grade for %s: %.2f\n", students[i].name, average);
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    
    do {
        printf("\nStudent Grade Tracker\n");
        printf("1. Add Student\n");
        printf("2. Enter Grades\n");
        printf("3. Display Grades\n");
        printf("4. Calculate Average\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                enterGrades();
                break;
            case 3:
                displayGrades();
                break;
            case 4:
                calculateAverage();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}