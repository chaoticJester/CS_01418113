//05 Polymorph Transportation Fare 4
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

class BmtaBus: public Transportation {
public:
    virtual double fare() {
        return 6.50;
    } 
};

class BTS: public Transportation {
private:
    int station;

public:
    void setStation(int n) {
        this->station = n;
    }

    virtual double fare() {
        return 15 + (station * 5);
    }
};

class Passenger {
private:
    double totalFare;

public:
    Passenger() {
        totalFare = 0;
    }

    void addTransportation(Transportation &t) {
        this->totalFare += t.fare();
    }

    double getTotalFare() {
        return this->totalFare;
    }
};

int main() {
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);            
            passenger.addTransportation(*bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}