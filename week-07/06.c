//06 ถักอักขระ (1)
#include <stdio.h>

int charcount(char *s) {
    int count;
    for(count = 0; s[count] != '\0'; count++);
    return count;
}

void charweave(char *s,char *result) {
    int len = charcount(s);
    int n = len - 1, j = 0, k = len - 1;
    for(int i = 0; i < len; i++) {
        if(i % 2 == 0) {
            result[i] = s[j];
            j++;
        } else {
            result[i] = s[k];
            k--;
        }
    }
    for(int i = len, j = len - 1; i < len * 2; i++, j--) {
        result[i] = result[j];
    }
    result[len * 2] = '\0';
}

int main() {  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result); 
   return 0;
}