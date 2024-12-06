//
// Created by axelj on 06/12/2024.
//

#include "Wagon/FreightWagon.hpp"
using namespace simasciitrain;
#include <iostream>

FreightWagon::FreightWagon(int freightCount)
    : AbstractWagon(&TypeWagon::FREIGHT), freightCount_(freightCount) {}

int FreightWagon::getFreightCount() const {
    return freightCount_;
}

void FreightWagon::setFreightCount(int freightCount) {
    freightCount_ = freightCount;
}

void FreightWagon::print(std::ostream& os) const {
    os << "Freight Wagon [" << freightCount_ << "] " << getSymbol();
}
