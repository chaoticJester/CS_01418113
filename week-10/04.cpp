//04 Object Circle
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
    double x, y, r;
    cout << "Center of Circle: ";
    cin >> x >> y;
    cout << "Radius of Circle: ";
    cin >> r;
    point test = {x, y};
    Circle testC(test, r);

    double checkX, checkY;
    cout << "Point to Check: ";
    cin >> checkX >> checkY;
    point checkP = {checkX, checkY};

    cout << "Area of Circle is " << testC.area() << endl;
    cout << "Distance from Center to Point (" << checkP.xPosition << ", " << checkP.yPosition << ") is " << testC.distanceFromCenter(checkP) << endl;
    if(testC.contains(checkP) == 1) {
        cout << "This circle contains this point." << endl;
    } else {
        cout << "This point is not in this circle." << endl;
    }
    return 0;
}