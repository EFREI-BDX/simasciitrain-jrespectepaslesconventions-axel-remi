#pragma once

#include <vector>
#include <ostream>
#include "AWagon.hpp"  // Assurez-vous que ce fichier est inclus. AbstractWagon hérite de ITrainElement.

namespace simasciitrain
{
    class Wagons
    {
    public:
        Wagons() = default;

        ~Wagons() {}

        Wagons *addWagon(AWagon* wagon);

        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);

    private:
        std::vector<AWagon*> wagons_;
    };
}
