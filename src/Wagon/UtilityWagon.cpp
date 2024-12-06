//
// Created by axelj on 06/12/2024.
//

#include "Wagon/UtilityWagon.hpp"
#include <iostream>
using namespace simasciitrain;

UtilityWagon::UtilityWagon() : AbstractWagon(&TypeWagon::UTILITY) {}

void UtilityWagon::print(std::ostream& os) const {
    os << "Utility Wagon " << getSymbol();
}
