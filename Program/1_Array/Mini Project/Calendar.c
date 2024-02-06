#include <stdio.h>
#include<string.h>


#define MAX_EVENTS 31  // Maximum number of events for a month

void displayCalendar(int year, int month);
void addEvent(char events[MAX_EVENTS][50], int day);
void viewEvents(char events[MAX_EVENTS][50], int day);

int main() {
    int year = 2024;  // Change this to the desired year
    int month = 1;    // Change this to the desired month (1 to 12)

    char events[MAX_EVENTS][50] = {""};

    while (1) {
        printf("\n----- Calendar Application -----\n");
        displayCalendar(year, month);

        printf("\n1. Add Event\n");
        printf("2. View Events\n");
        printf("3. Change Month\n");
        printf("4. Exit\n");

        int choice;
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int day;
                printf("Enter the day to add an event: ");
                scanf("%d", &day);
                addEvent(events, day);
                break;
            }
            case 2: {
                int day;
                printf("Enter the day to view events: ");
                scanf("%d", &day);
                viewEvents(events, day);
                break;
            }
            case 3: {
                int newMonth;
                printf("Enter the new month (1-12): ");
                scanf("%d", &newMonth);
                if (newMonth >= 1 && newMonth <= 12) {
                    month = newMonth;
                } else {
                    printf("Invalid month. Please enter a value between 1 and 12.\n");
                }
                break;
            }
            case 4: {
                printf("Exiting the Calendar Application. Goodbye!\n");
                return 0;
            }
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

void displayCalendar(int year, int month) {
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    int dayOfWeek = 1; // January 1, 2024 is a Monday
    for (int i = 1; i <= 31; ++i) {
        if (i == 1) {
            for (int j = 0; j < dayOfWeek - 1; ++j) {
                printf("    ");
            }
        }

        if (i <= 9) {
            printf("   %d", i);
        } else {
            printf("  %d", i);
        }

        if ((i + dayOfWeek - 1) % 7 == 0 || i == 31) {
            printf("\n");
        }

        if (i == 31) {
            break;
        }
    }
}

void addEvent(char events[MAX_EVENTS][50], int day) {
    char event[50];
    printf("Enter the event: ");
    scanf("%s", event);
    
    if (day >= 1 && day <= MAX_EVENTS) {
        strcpy(events[day - 1], event);
        printf("Event added successfully!\n");
    } else {
        printf("Invalid day. Please enter a day between 1 and 31.\n");
    }
}

void viewEvents(char events[MAX_EVENTS][50], int day) {
    if (day >= 1 && day <= MAX_EVENTS) {
        if (events[day - 1][0] != '\0') {
            printf("Events for day %d: %s\n", day, events[day - 1]);
        } else {
            printf("No events for day %d.\n", day);
        }
    } else {
        printf("Invalid day. Please enter a day between 1 and 31.\n");
    }
}
