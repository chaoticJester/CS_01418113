//02 เงินได้รายบุคคล
#include <iostream>
using namespace std;

int main() {
    char name[20];
    char txt[100];
    double totalSalary = 0, salary, monthSalary;
    cin >> name;
    cin >> salary;
    for(int i = 0; i < 12; i++) {
        cin >> monthSalary;
        totalSalary += salary + (monthSalary * 0.15);
    }
    sprintf(txt, "%s %.2lf", name, totalSalary);
    cout << txt << endl;
}