#pragma once
#include "ALocomotive.hpp"
#include "ETypeLocomotive.hpp"

namespace simasciitrain
{
    class ElectricLocomotive : public ALocomotive
    {
    public:
        ElectricLocomotive() : ALocomotive(ETypeLocomotive::ELECTRIC) {}
        ~ElectricLocomotive() override = default;
    };

}
