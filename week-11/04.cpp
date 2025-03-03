//04 Weapon Part 2
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

class Weapon {
private:
    int durability;
    int damage;
    string weaponType;

public:
    Weapon(int durability, int damage, string weaponType);
    int getDurability();
    int getDamage();
    string getWeaponType();
    int attack();
    bool upgrade(Material material);
    void repair();
    void showStatus();
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

Weapon::Weapon(int durability, int damage, string weaponType) {
    this->durability = durability;
    if(this->durability < 0) {
        this->durability = 0;
    } else if(this->durability > 100) {
        this->durability = 100;
    }
    this->damage = damage;
    if(this->damage < 0) {
        this->damage = 0;
    }
    this->weaponType = weaponType;
}

int Weapon::getDurability() {
    return durability;
}

int Weapon::getDamage() {
    return damage;
}

string Weapon::getWeaponType() {
    return weaponType;
}

int Weapon::attack() {
    if(getDurability() <= 0) {
        return 0;
    } 
    this->durability -= 2;
    if(this->durability < 0) {
        this->durability = 0;
    }
    return getDamage();
}

bool Weapon::upgrade(Material material) {
    if(material.isCompatibleWith(this->weaponType)) {
        this->damage += material.getUpgradeValue();
        return true;
    }
    return false;
}

void Weapon::repair() {
    this->durability = 100;
}

void Weapon::showStatus() {
    cout << getDurability() << " " << getDamage() << " " << getWeaponType();
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
    cout << "-------------------------" << endl;
    Weapon firstWeapon(101, 7, "Dagger");
    cout << firstWeapon.getDurability() << endl;
    cout << firstWeapon.getDamage() << endl;
    cout << firstWeapon.getWeaponType() << endl;
    cout << firstWeapon.attack() << endl;
    cout << firstWeapon.getDurability() << endl;
    cout << firstWeapon.upgrade(iron) << endl;
    cout << firstWeapon.getDamage() << endl;
    firstWeapon.repair();
    cout << firstWeapon.getDurability() << endl;
    firstWeapon.showStatus();
}