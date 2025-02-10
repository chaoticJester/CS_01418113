//03 หาค่า cross product ระหว่าง 2 เวคเตอร์

#include <stdio.h>

struct vector {
    float x;
    float y;
    float z;
};

int main() {
    struct vector u, v, product;
    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);

    product.x = (u.y * v.z) - (u.z * v.y);
    product.y = (u.z * v.x) - (u.x * v.z);
    product.z = (u.x * v.y) - (u.y * v.x);
    
    printf("u x v = %.1f %.1f %.1f", product.x, product.y, product.z);

    return 0;
}