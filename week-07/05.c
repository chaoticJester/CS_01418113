//05 ก็อปปี้และเปลี่ยนอักษรใน string เป็นตัวใหญ่
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char arr[]) {
    int len;
    for(len = 0; arr[len] != '\0'; len++);
    char *r = (char*) malloc(sizeof(char) * len);
    for(int i = 0; i < len; i++) {
        r[i] = toupper(arr[i]);
    }
    r[len] = '\0';
    return r;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}