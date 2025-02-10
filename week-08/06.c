//06 หาค่าผลบวกและผลคูณระหว่างจำนวนเชิงซ้อน 2 จำนวน
#include <stdio.h>

struct complex {
    float a;
    float b;
};

struct complex add_complex(struct complex C, struct complex D) {
    struct complex result = {C.a + D.a, C.b + D.b};
    return result; 
}

struct complex multiply_complex(struct complex C, struct complex D) {
    float x = (C.a * D.a) - (C.b * D.b);
    float y = (C.a * D.b) + (C.b * D.a);
    struct complex result = {x, y};
    return result; 
}

void print_complex(char array[], struct complex target) {
    printf("%s", array);
    if (target.a == 0.0 && target.b == 0.0) {
        printf("0.0");
    } else if(target.a != 0.0) {
        printf("%.1lf ", target.a);
        if(target.b != 0.0) {
            if(target.b > 0.0) {
                printf("+ %.1lfi", target.b);
            } else {
                printf("- %.1lfi", -1 * target.b);
            }
        }
    } else if (target.a == 0.0) {
        if(target.b != 0.0) {
            if(target.b > 0.0) {
                printf("%.1lfi", target.b);
            } else {
                printf("-%.1lfi", -1 * target.b);
            }
        }
    }
    printf("\n");
}

int main() {
    struct complex C, D, E, F;
    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);
    printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);
    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}