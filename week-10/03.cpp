//03 Class Circle
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
private:
    point center;
    double radius;

public:
    Circle(point c, double r) {
        center.xPosition = c.xPosition;
        center.yPosition = c.yPosition;
        radius = r;
    }

    double area() {
        return M_PI * pow(radius, 2);
    }

    double distanceFromCenter(point pt) { 
        return abs(sqrt(pow((pt.xPosition - center.xPosition), 2) + pow((pt.yPosition - center.yPosition), 2)));
    }

    int contains(point pt) {
        double cal_r = distanceFromCenter(pt); 
        if(cal_r <= radius) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main() {
    point a = {0.0, 0.0};
    Circle A(a, 10.0);
    cout << A.area() << endl;
    point B = {1.0, 1.0};
    cout << A.distanceFromCenter(B) << endl;
    point C = {11.0, 11.0};
    cout << A.contains(C) << endl;
    return 0;
}