//
// Created by axelj on 06/12/2024.
//

#include "Wagon/Wagons.hpp"
using namespace simasciitrain;

Wagons::Wagons() {}

Wagons::~Wagons() {
    for (AbstractWagon* wagon : wagons_) {
        delete wagon;
    }
}

Wagons* Wagons::addWagon(AbstractWagon* wagon) {
    wagons_.push_back(wagon);
    return this;
}

std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
    for (const AbstractWagon* wagon : wagons.wagons_) {
        wagon->print(os);
        os << "\n";
    }
    return os;
}

