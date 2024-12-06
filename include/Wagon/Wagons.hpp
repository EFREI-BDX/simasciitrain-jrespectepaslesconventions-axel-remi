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

        Wagons *addWagon(AWagon* wagon)
        {
            wagons_.push_back(wagon);
            return this;
        }

        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons)
        {
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

    private:
        std::vector<AWagon*> wagons_;
    };
}
