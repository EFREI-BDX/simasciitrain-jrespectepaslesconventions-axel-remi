//
// Created by axelj on 06/12/2024.
//

#include "Wagon/AWagon.hpp"
#include "Wagon/TypeWagon.hpp"

using namespace simasciitrain;

AbstractWagon::AbstractWagon(const TypeWagon *typeWagon)
    : typeWagon(typeWagon) {}

char AbstractWagon::getSymbol() const {
    return typeWagon->getSymbol();
}

std::string AbstractWagon::getType() const {
    return typeWagon->getName();
}

std::ostream &operator<<(std::ostream &os, const AbstractWagon &wagon) {
    wagon.print(os);
    return os;
}
