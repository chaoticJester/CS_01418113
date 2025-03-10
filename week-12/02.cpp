//02 Polymorph Transportation Fare 1
#include <iostream>
using namespace std;

class Transportation {
public:
    virtual double fare() = 0;
};

class Taxi: public Transportation {
private:
    double distance;
public:
    Taxi() : distance(0) {}
    void setDistance(double d) {
        this->distance = d;
    }
    virtual double fare() {
        double payment = 35 + (distance * 2); 
        return payment;
    }
};

int main() {
    int tc;
    cin >> tc;
    if (tc == 1) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        cout << "Taxi fare: "
             << taxi.fare() << endl;
    } else if(tc == 2) {
        double distance;
        cin >> distance;
        Taxi taxi;
        taxi.setDistance(distance);
        Transportation *transport = &taxi;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}