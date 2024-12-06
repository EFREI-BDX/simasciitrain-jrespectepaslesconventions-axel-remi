#include <ostream>
#include <stdio.h>
#include <Wagon/Wagons.hpp>
using namespace simasciitrain;

Wagons * Wagons::addWagon(AWagon *wagon)
{
        wagons_.push_back(wagon);
        return this;
}

std::ostream & simasciitrain::operator<<(std::ostream &os, const Wagons &wagons) {

        for (size_t i = 0; i < wagons.wagons_.size(); ++i)
        {
                if (wagons.wagons_[i])
                {
                        os << *(wagons.wagons_[i]);
                        if (i < wagons.wagons_.size() - 1)
                        {
                                os << "-";
                        }
                }
        }
        return os;
}
