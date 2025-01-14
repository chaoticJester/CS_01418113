//01 นับสระในสายอักขระ
#include <stdio.h>

int main() {
    char array_vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char str[100];
    int n_vowel = 0;
    printf("String (without a space): ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        for(int j = 0; j < 10; j++) {
            if(str[i] == array_vowel[j]) {
                printf("%c ", str[i]);
                n_vowel++;
                break;
            }
        }
    }
    printf("\n");
    if(n_vowel <= 1) {
        printf("This string contains %d vowel.", n_vowel);
    } else {
        printf("This string contains %d vowels.", n_vowel);
    }
}