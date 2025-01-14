//04 โซ่คำ (3%)
#include <stdio.h>

int main() {
    int len, guess, wrong = 0, l_chain = 0;
    scanf("%d", &len);
    scanf("%d", &guess);

    char word_arr[guess][len];
    for(int i = 0; i < guess; i++) {
        scanf("%s", word_arr[i]);
        if(i != 0) {
            for(int j = 0; j < len; j++) {
                if(word_arr[i-1][j] != word_arr[i][j]) {
                    wrong ++;
                }
            }
            if(wrong <= 2) {
                l_chain = i;
                wrong = 0;
            }
        }
    }
    for(int i = 0; i < len; i++) {
        printf("%c", word_arr[l_chain][i]);
    }
    return 0;
}