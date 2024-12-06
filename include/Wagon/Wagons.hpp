//
// Created by axelj on 06/12/2024.
//

#ifndef WAGONS_HPP
#define WAGONS_HPP

#include "Wagon/AWagon.hpp"
#include <vector>
#include <ostream>

namespace simasciitrain {
    class Wagons {
    private:
        std::vector<AbstractWagon*> wagons_;

    public:
        Wagons();

        ~Wagons();

        Wagons* addWagon(AbstractWagon* wagon);

        friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);
    };
}

#endif // WAGONS_HPP
