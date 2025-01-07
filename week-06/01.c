//01 แปลงรูปแบบ 12-hour เป็น 24-hour
#include <stdio.h>

int main()
{
    int hour, minute;
    char phase;
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %c", &hour, &minute, &phase);
    printf("Equivalent 24-hour time: ");
    if(phase == 'a' || phase == 'A') {
        if(hour >= 12) {
            printf("%02d:%02d", hour - 12, minute);
        } else {
            printf("%02d:%02d", hour, minute);
        }
    } else if(phase == 'p' || phase == 'P') {
        if(hour >= 12 && minute > 0) {
            printf("%02d:%02d", hour, minute);
        } else {
            printf("%02d:%02d", hour + 12, minute);
        }
    }
}