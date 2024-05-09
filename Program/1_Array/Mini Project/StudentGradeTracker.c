#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_SUBJECT 4

struct student
{
    int id;
    char name[50];
    int subject[MAX_SUBJECT];
    float per;
    int status;
};

struct student students[MAX_STUDENTS];
struct student maxPerStd[MAX_STUDENTS];
int StudentCount = 0;
int StudentId = 101;

void addStudent()
{
    if (StudentCount < MAX_STUDENTS)
    {
        students[StudentCount].id = StudentId;
        printf("Enter Student name :");
        scanf("%s", students[StudentCount].name);
        students[StudentCount].status = 0;
        StudentId++;
        StudentCount++;
    }
    else
    {
        printf("maximum number of students reached!");
    }
}
char checkGrade(float per)
{
    if (per >= 90)
    {
        return 'O';
    }
    else if (per >= 80)
    {
        return 'A';
    }
    else if (per >= 70)
    {
        return 'B';
    }
    else if (per >= 60)
    {
        return 'C';
    }
    else if (per >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

void displayStudent()
{
    if (StudentCount > 0)
    {
        printf("Student Detail\n");
        for (int i = 0; i < StudentCount; i++)
        {

            printf("\nStudent ID :%d", students[i].id);
            printf("\nStudent Name :%s", students[i].name);
            if (students[i].status == 1)
            {
                printf("\nResult : Added");
            }
            else
            {
                printf("\nResult : Not Added!");
            }
            printf("\n------------------------------------------------------------------------");
        }
    }
    else
    {
        printf("\nNo Records Found!\n");
    }
}

void addMarks()
{
    int id;
    printf("\nEnter Student ID:");
    scanf("%d", &id);
    printf("\n");
    int i;
    int isOK = 0;

    for (i = 0; i < StudentCount; i++)
    {
        if (students[i].id == id)
        {
            isOK = 1;
            int isMarksOk = 1;
            if (students[i].status == 1)
            {
                printf("\nMarks have been already added!");
                break;
            }
            students[i].status = 1;
            int totalMarks = 0;
            for (int j = 0; j < MAX_SUBJECT; j++)
            {
                printf("Subject %d Marks :", j + 1);
                scanf("%d", &students[i].subject[j]);
                if (students[i].subject[j] > 100 || students[i].subject[j] < 0)
                {
                    printf("\nPlease Enter valid Marks!");
                    isMarksOk = 0;
                    students[i].status = 0;
                    break;
                }

                totalMarks = totalMarks + students[i].subject[j];
                float per = (totalMarks * 100) / (MAX_SUBJECT * 100);
                students[i].per = per;
            }
            if (isMarksOk == 1)
            {
                printf("Marks Added\n");
                break;
            }
        }
    }
    if (isOK == 0)
    {
        printf("Invalid Student ID!");
    }

    printf("\n");
}

void displayMarks()
{

    int id;
    printf("\nEnter Student ID:");
    scanf("%d", &id);
    printf("\n");
    int isOk = 0;
    int isMarksOk=1;
    for (int i = 0; i < StudentCount; i++)
    {
        if (students[i].id == id)
        {
            isOk = 1;
           
            if (students[i].status == 0)
            {
                printf("Marks have not been added yet!\n");
                break;
            }
            printf("\nStudent ID :%d", id);
            printf("\nStudent Name :%s\n", students[i].name);
            for (int j = 0; j < MAX_SUBJECT; j++)
            {
                printf("Subject %d: %d  |  ", j + 1, students[i].subject[j]);
                if(students[i].subject[j] < 50)
                    {
                        isMarksOk=0;
                    }
            }
            printf("\nPercentage : %f", students[i].per);
            char result[1];
            result[1] = checkGrade(students[i].per);
            printf("\nGrade: %c\n", result[1]);
            if(isMarksOk == 1)
                {
                    printf("Result : PASS\n");
                }
            else
                {
                    printf("Result : FAIL\n");
                }
            break;
        }
    }
    if (isOk == 0)
    {
        printf("\nInvalid Student ID\n");
    }
}

void deleteStudent()
{
    int id;
    printf("\nEnter Student ID :");
    scanf("%d", &id);
    int found = 0;

    for (int i = 0; i < StudentCount; i++)
    {
        if (students[i].id == id)
        {
            found = 1;
            for (int j = i; j < StudentCount; j++)
            {
                students[j].id = students[j].id;
                strcpy(students[j].name, students[j + 1].name);
                for (int k = 0; k < MAX_SUBJECT; k++)
                {
                    students[j].subject[k] = students[j + 1].subject[k];
                }
                students[j].per = students[j + 1].per;
                students[j].status = students[j + 1].status;
            }
            StudentCount--;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nInvalid Student ID!");
        printf("\n");
    }
}

void resultBoard()
{
    int i = 0;
    float max = students[i].per;
    while (i < StudentCount && students[i].status == 1)
    {
        if (max < students[i].per)
        {
            max = students[i].per;
        }
        i++;
    }
    printf("\nMax : %f", max);
}

void main()
{
    int ch;
    do
    {
        printf("\nStudent Grade Tracker\n");
        printf("1. Add Student\n");
        printf("2. Enter Marks\n");
        printf("3. Display Student\n");
        printf("4. Display Result\n");
        printf("5. Delete Student record\n");
        printf("6. Result Board\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            addStudent();
            break;
        case 2:
            addMarks();
            break;
        case 3:
            displayStudent();
            break;
        case 4:
            displayMarks();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            resultBoard();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (ch != 0);
}
