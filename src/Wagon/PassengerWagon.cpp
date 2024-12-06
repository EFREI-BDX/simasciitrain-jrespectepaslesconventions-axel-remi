#include "Wagon/PassengerWagon.hpp"
using namespace simasciitrain;


inline void PassengerWagon::print(std::ostream &os) const
{
    os << "[";
    for (int i = 0; i < passengerCount_; ++i)
    {
        os << "O";
    }
    os << "]";
}


