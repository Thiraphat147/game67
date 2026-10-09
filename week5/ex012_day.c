#include <stdio.h>
int main()
{
    typedef enum
    {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    } Day;

    Day today;
    printf("Enter a number (0-7): ");
    scanf("%d", &today);
    switch (today)
    {
    case 0:
        printf("Today is monday.(Weekday)\n");
        break;
    case 1:
        printf("Today is tuesday.\n");
        break;
    case 2:
        printf("Today is wednesday.\n");
        break;
    case 3:
        printf("Today is thursday.\n");
        break;
    case 4:
        printf("Today is friday.\n");
        break;
    case 5:
        printf("Today is saturday.\n");
        break;
    case 6:
        printf("Today is sunday.(Weekend!)\n");
        break;
    default:
        printf("Invalid day.\n");
    }
}