//03 Shift Array
#include <stdio.h>
#include <stdlib.h>

void shift_left(char str[], int n);

int main()
{  char str[80], *c;
   int n;
   printf("String: ");
   fgets(str, sizeof(str), stdin);
   for (c=str; *c && *c != '\n'; c++)
       ;
   *c = 0;
   printf("     n: ");
   scanf("%d", &n);
   shift_left(str, n);
   printf("Output: >>%s<<\n",str);
   return 0;
}

//-----------------------
void shift_left(char str[], int n) {
    int size = 0, times;
    while(str[size] != '\0') {
        size++;
    }
    times = n;
    if(size == 0) {
        times = 0;
    } else if(n >= size * size) {
        times = n % size;
    }
    while(times > 0) {
        char temp = str[0];
        for(int i = 1; i < size; i++) {
            str[i - 1] = str[i];
        }
        str[size - 1] = temp;
        times--;
    }
}
//-----------------------
