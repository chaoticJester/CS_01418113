//03 Weapon Part 1
#include <iostream>
#include <vector>
using namespace std;

class Material {
private:
    string name;
    int quality;
    vector<string> compatibleTypes;

public:
    Material(string name, int quality);
    string getName();
    int getQuality();
    void addCompatibleType(string type);
    bool isCompatibleWith(string weaponType);
    int getUpgradeValue();
};

Material::Material(string name, int quality) {
    this->name = name;
    this->quality = quality;
    if(this->quality < 1) {
        this->quality = 1;
    } else if(this->quality > 5) {
        this->quality = 5;
    }
}
string Material::getName() {
    return name;
}

int Material::getQuality() {
    return quality;
}

void Material::addCompatibleType(string type) {
    compatibleTypes.push_back(type);
}

bool Material::isCompatibleWith(string weaponType) {
    for(int i = 0; i < compatibleTypes.size(); i++) {
        if(compatibleTypes[i] == weaponType) {
            return true;
        }
    }
    return false;
}

int Material::getUpgradeValue() {
    return 5 * getQuality();
}

int main() {
    Material iron("iron", 0);
    iron.addCompatibleType("Sword");
    iron.addCompatibleType("Lance");
    iron.addCompatibleType("Dagger");
    cout << iron.getName() << endl;
    cout << iron.getQuality() << endl;
    cout << iron.getUpgradeValue() << endl;
    cout << iron.isCompatibleWith("Sword") << endl;
    cout << iron.isCompatibleWith("Bow") << endl;
}