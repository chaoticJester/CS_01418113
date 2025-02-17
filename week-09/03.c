//03 Struct ที่เก็บพิกัดของจุด และหาระยะทาง
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

int main() {
    int n;
    printf("Number of Points: ");
    scanf("%d", &n);

    struct Point *points  = (struct Point*) malloc(sizeof(struct Point) * n);
    for(int i = 0; i < n; i++) {
        double tmpX, tmpY;
        printf("P%d.X: ", i+1);
        scanf("%lf", &tmpX);
        printf("P%d.Y: ", i+1);
        scanf("%lf", &tmpY);
        points[i].x = tmpX;
        points[i].y = tmpY;
    }
    printf("Length:\n");
    for(int i = 0; i < n-1; i++) {
        double dX = points[i+1].x - points[i].x;
        double dY = points[i+1].y - points[i].y;
        double length = sqrt((dX * dX) + (dY * dY));
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", i+1, points[i].x, points[i].y, i+2, points[i+1].x, points[i+1].y, length);
        
    }
    return 0;
}