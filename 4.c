#include <stdio.h>

enum weekday {
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6,
    SUNDAY = 7
};

int main() {
    int day;
    
    printf("Enter day number (0-6): ");
    scanf("%d", &day);
    
    enum weekday check = day;
    
    switch(check) {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
    }
    
    return 0;
}