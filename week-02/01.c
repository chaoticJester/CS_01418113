//Find Error

/*
#include <studio.h>
#include <stolib.h>
int main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: "):
    fget(hour_str, 3, stdin);

    printf("Enter minute: "):
    get(minstr);

    hour = atoi(hour_str);
    minute = atoi(minstr);

    printf("Time is %d:%d, hour, minute");
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hour_str[4], min_str[4];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 4, stdin);

    printf("Enter minute: ");
    gets(min_str);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d", hour, min);
    return 0;
}