//09 แยกสระจากสตริง
#include <stdio.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel);

int main() {
    char* str = malloc(201);
    scanf("%[^\n]s", str);
    
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}

void str_extract(char** source, char** vowel) {
    char array_vowel[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int length = 0, num_vowel = 0;
    char *Ptr = *source;
    //Count numbers of vowel
    while(Ptr[length] != '\0') {
        for(int i = 0; i < 10; i++) {
            if(Ptr[length] == array_vowel[i]) {
                num_vowel++;
                break;
            }
        }
        length++;
    }
    //Create an array of vowel and array of consonant to append vowel and consonant into the array
    char *v_arr = (char*) malloc(sizeof(char) * (num_vowel + 1));
    int num_con = length - num_vowel;
    char *c_arr =  (char*) malloc(sizeof(char) * (num_con + 1));
    int found_v = 0;
    for(int i = 0, k = 0, h = 0; i < length; i++) {
        for(int j = 0; j < 10; j++) {
            if(Ptr[i] == array_vowel[j]) {
                char temp = Ptr[i];
                v_arr[h] = temp;
                h++;
                found_v = 1;
                break;
            }
        }
        if(found_v) {
            found_v = 0;
            continue;
        } else {
            c_arr[k] = Ptr[i];
            k++;
        }
    }
    
    c_arr[num_con] = '\0';
    v_arr[num_vowel] = '\0';
    *source = c_arr;
    *vowel = v_arr;
}