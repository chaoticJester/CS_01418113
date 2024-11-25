//คอมพิวเตอร์ทำงาน
#include<stdio.h>

int main() {
    int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    //----------
    int day = computer_time / 1440;
    computer_time = computer_time -( day * 1440);
    int hour = computer_time / 60;
    computer_time = computer_time - (hour * 60);
    int minute = computer_time;

    printf("It is %d days %d hours and %d minutes.", day, hour, minute);
    //-----------
    return 0;

}
