#include "Wagon/FreightWagon.hpp"
using namespace simasciitrain;

void FreightWagon::print(std::ostream &os) const
{
    os << "[";
    for (int i = 0; i < freightCount_; ++i)
    {
        os << "#";
    }
    os << "]";
}