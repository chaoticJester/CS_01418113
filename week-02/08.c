//ร้านขายพิซซา

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char size_in[3], pep_in[3], che_in[3], mush_in[3];
    float cost, price, area;
    int F_c = 5;
    int B_c = 2;
    float Ex_c = 0;
    int d;
    
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_in, 4, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pep_in, 4, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(che_in, 4, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mush_in, 4, stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    int s = atoi(size_in);
    int p = atoi(pep_in);
    int c = atoi(che_in);
    int m = atoi(mush_in);
    
    if(s == 1) {
        d = 10;
    } else if(s == 2) {
        d = 16;
    } else if(s == 3) {
        d = 20;
    }
    
    if(p == 1) {
        Ex_c += 0.5;
    }
    if(c == 1) {
        Ex_c += 0.25;
    }
    if(m == 1) {
        Ex_c += 0.3;
    }
    
    area = M_PI * (d * d) / 4 ;
    cost = F_c + (B_c * area) + (Ex_c * area);
    price = 1.5 * cost;
    
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");
    
    return 0;
}