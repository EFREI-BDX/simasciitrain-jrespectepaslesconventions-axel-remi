#pragma once

#include "AWagon.hpp"

namespace simasciitrain
{
    class UtilityWagon : public AWagon {
    public:
        UtilityWagon() : AWagon(ETypeWagon::UTILITY) {}
        ~UtilityWagon() override = default;

        void print(std::ostream& os) const override {
            os << "[@]";
        }
    };
}