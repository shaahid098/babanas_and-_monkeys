#include "Monkey.h"

Monkey::Monkey() {
    name = "George";
    energy = 500;

}

Monkey::Monkey(std::string name) {
    this->name= name;
    energy = 500;
}

std::string Monkey::getName() const {
    return name;
}
void Monkey::setName(std::string name) {
    if  (name == "Butthead") {
        return;
    }
    this->name = name;
}

int Monkey::getEnergy() const {
    return energy;
}

void Monkey::swingFromTrees() {
    if (energy <= 0) {
        return;
    }
    energy = energy - 100;

    if (energy < 1) {
        energy = 0;
    }
}

bool Monkey::isHungry() const {
    return (energy <= 200);

}

void Monkey::giveBanana(Banana *banana) {
    if (banana->getColor()=="Yellow") {
        energy = energy + banana->getCalories();
    }
}
