#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[30];
    int id;
    struct date joindate; // nested structure
};

int main() {
    struct employee e;

    printf("Enter the employee name: ");
    scanf("%s", e.name);

    printf("Enter the employee ID: ");
    scanf("%d", &e.id);

    printf("Enter the joining date (day month year): ");
    scanf("%d %d %d", &e.joindate.day, &e.joindate.month, &e.joindate.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%d\n", e.joindate.day, e.joindate.month, e.joindate.year);

    return 0;
}
