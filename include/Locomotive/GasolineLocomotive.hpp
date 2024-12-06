#pragma once

#include "ALocomotive.hpp"
#include "ETypeLocomotive.hpp"

namespace simasciitrain
{
    class GasolineLocomotive : public ALocomotive
    {
    public:
        GasolineLocomotive() : ALocomotive(ETypeLocomotive::GASOLINE) {}
        ~GasolineLocomotive() override = default;
    };
}
