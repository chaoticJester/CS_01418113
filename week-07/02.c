//02 ลบสระออกจากสายอักขระ
#include <stdio.h>

int remove_vowel(char array[]) {
    int len;
    char array_vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(len = 0; array[len] != '\0'; len++);
    for(int i = 0; i < len; i ++) {
        for(int j = 0; j < 10; j++) {
            if(array[i] == array_vowel[j]) {
                for(int k = i + 1; k < len + 1; k ++) {
                    array[k - 1] = array[k];
                }
                array[len + 1] = '\0';
                i--;
                break;
            }
        }
    }
}

int main()
{  char str[80];

  printf(" Input: ");
  fgets(str, 80, stdin);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}