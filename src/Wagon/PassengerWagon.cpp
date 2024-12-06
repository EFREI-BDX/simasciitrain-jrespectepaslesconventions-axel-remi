#include "Wagon/PassengerWagon.hpp"
#include <iostream>
using namespace simasciitrain

PassengerWagon::PassengerWagon(int passengerCount)
    : AbstractWagon(&TypeWagon::PASSENGER), passengerCount_(passengerCount) {}

int PassengerWagon::getPassengerCount() const {
    return passengerCount_;
}

void PassengerWagon::setPassengerCount(int passengerCount) {
    passengerCount_ = passengerCount;
}

void PassengerWagon::print(std::ostream& os) const {
    os << "Passenger Wagon ["
       << passengerCount_
       << "] " << getSymbol();
}
