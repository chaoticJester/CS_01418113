//ตรวจสอบประเภทของตัวอักษร

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chr = getchar();

    if (chr >= 97 && chr <= 122) {
        printf("Output: lower case");
    } else if(chr >= 65 && chr <= 90) {
        printf("Output: upper case");
    } else if(chr >= 48 && chr <= 57) {
        printf("Output: digit");
    } else {
        printf("Output: others");
    }
    return 0;
}