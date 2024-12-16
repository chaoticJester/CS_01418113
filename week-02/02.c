//โปรโมชั่นสะสมสติกเกอร์

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sticker_in[10], price_in[10];
    int sticker;
    float price;
    int dis = 0;

    fgets(sticker_in, 10, stdin);
    fgets(price_in, 10, stdin);

    sticker = atoi(sticker_in);
    price = atof(price_in);

    if(sticker >= 9) {
        dis += 40;
        sticker -= 9;
    } else if(sticker >= 6) {
        dis += 30;
        sticker -= 6;
    } else if(sticker >= 3) {
        dis += 20;
        sticker -= 3;
    } else if(sticker == 2) {
        dis += 15;
        sticker -= 2;
    } else if(sticker == 1) {
        dis += 10;
        sticker -= 1;
    }

    float finalP = price - (price * (dis * 0.01));
    
    printf("You get %d percents discount.", dis);
    printf("\nTotal amount due is %.2f Baht.", finalP);
    printf("\nAnd you have %d stickers left.", sticker);

    return 0;
}