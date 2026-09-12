#include <stdio.h>

int main(void)
{
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

    printf("Please enter the time in seconds: ");
    scanf("%d", &totalSeconds);

    if (totalSeconds < 0)
    {
        printf("Invalid Input !!\n");
    }
    else
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        printf("The time is %d hour(s), %d minute(s), and %d second(s).\n",
               hours, minutes, seconds);
    }

    return 0;
}
