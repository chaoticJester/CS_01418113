//02 Object Hero
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
    string name;
    int startingLevel;
    cin >> name >> startingLevel;
    Hero No1(name, startingLevel);
    cout << No1.getName() << " " << No1.getLevel() << endl;
}