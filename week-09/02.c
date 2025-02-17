//02 คำนวณวันในสัปดาห์
#include <stdio.h>

typedef enum {TUE=1, WED=2, THU=3, FRI=4, SAT=5, SUN=6, MON=7} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    DayOfWeek result = TUE;
    int m[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0, i;
    for(i = 0; i <= month; i++) {
        days += m[i];
    }
    days -= m[i - 1] - day;
    for(; days > 1; days--) {
        if(result == 7) {
            result = 1;
        } else {
            result ++;
        }
    }
    return result;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case SUN: 
            printf("Sunday.\n"); break;
        case MON: 
            printf("Monday.\n"); break;
        case TUE: 
            printf("Tuesday.\n"); break;
        case WED: 
            printf("Wednesday.\n"); break;
        case THU: 
            printf("Thursday.\n"); break;
        case FRI: 
            printf("Friday.\n"); break;
        case SAT: 
            printf("Saturday.\n"); break;
    }
}