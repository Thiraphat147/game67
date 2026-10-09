#include <stdio.h>
int main()
{
    int time;
    printf("Enter time in seconds: ");
    scanf("%d", &time);
    int hours = time / 3600;
    printf("Time: %d hours, ", hours);
    int minutes = (time % 3600) / 60;
    printf("%d minutes, ", minutes);
    int seconds = time % 60;
    printf("%d seconds\n", seconds);
    printf("Time: %02d:%02d:%02d \n", hours, minutes, seconds);

    return 0;
}