//01 Class Hero
#include <iostream>
#include <string>
using namespace std;

class Hero {
private:
    string name;
    int level;

public:
    Hero(string alias, int exp){
        name = alias;
        level = exp;
    }

    string getName() {
        return name;
    }

    int getLevel() {
        return level;
    }
};


int main()
{
   Hero No1("peter", 99);
   cout << "Name: " << No1.getName() << ", Level: " << No1.getLevel() << endl;
}