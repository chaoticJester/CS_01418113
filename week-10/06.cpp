//06 Time (c++11)
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    Time(int duration) {
        hour = duration / 3600;
        duration -= hour * 3600;
        minute = duration / 60;
        second = duration - (minute * 60);
    }

    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    int getDuration() {
        return (hour * 3600) + (minute * 60) + second;
    }

    Time add(Time other) {
        int rSecond = getDuration() + other.getDuration();
        while(rSecond > (24 * 3600)) {
            rSecond = abs((24 * 3600) - rSecond);
        }
        Time result(rSecond);
        return result;
    }

    int subtract(Time other) {
        int rSecond;
        rSecond = abs(getDuration() - other.getDuration());
        if(getDuration() < other.getDuration()) {
            rSecond = (24 * 3600) - rSecond;
        }
        return rSecond;
    }

    int equals(Time other) {
        if(getDuration() == other.getDuration()) {
            return 1;
        } else {
            return 0;
        }
    }

    string toString() {
        string r;
        if(hour > 9) {
            r = to_string(hour) + ':';
        } else {
            r = '0' + to_string(hour) + ':';
        }
        if(minute > 9) {
            r += to_string(minute) + ':';
        } else {
            r += '0' + to_string(minute) + ':';
        }
        if(second > 9) {
            r += to_string(second);
        } else {
            r += '0' + to_string(second);
        }
        return r;
    }
};

int main() {
    Time a(2, 2, 2);
    Time b(1, 1, 1);
    cout << a.toString() << endl;
    cout << b.toString() << endl;
    Time c = a.add(b);
    cout << a.getHour() << endl;
    cout << a.getMinute() << endl;
    cout << a.getSecond() << endl;
    cout << c.toString() << endl;
    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl;
    cout << a.subtract(b) << endl;
    cout << b.subtract(a) << endl;
    cout << a.equals(b) << endl;
    return 0;
}