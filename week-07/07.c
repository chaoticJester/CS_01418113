//07 เปลี่ยนเลขโรมันให้เป็นเลขอารบิก
#include <stdio.h>

void roman2arabic(char input[],char output[]) {
   int l, j = 0;
   for(l = 0; input[l] != '\0'; ++l);
   for(int i = 0; i < l; i++, j++) {
      int decimal = 0;
      if(input[i] == 'I' || input[i] == 'V') {
         for(; input[i] != '.' && input[i] != ',' && input[i] != ' ' && input[i] != '\0'; i++) {
            if(input[i] == 'I') {
               decimal++;
            } else if(decimal == 0 && input[i] == 'V') {
               decimal += 5;
            } else if(decimal > 0 && input[i] == 'V') {
               decimal += 3;
               break;
            } else if(decimal > 0 && input[i] == 'X') {
               decimal += 8;
               break;
            }
         }
         output[j] = decimal + '0';
         if(input[i] == ' ' || input[i] == '.' || input[i] == ',') {
            output[++j] = input[i];
         }
      } else {
         output[j] = input[i];
      }
   }
   output[j] = '\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}