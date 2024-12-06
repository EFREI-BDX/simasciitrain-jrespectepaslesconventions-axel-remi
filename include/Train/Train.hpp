#pragma once
#include "ITrain.hpp"
#include <ostream>

namespace simasciitrain
{
    class Wagons;
    class ALocomotive;

    class Train final : public ITrain
    {
    public:
        Train(Wagons* wagons, ALocomotive* locomotive)
            : wagons_(wagons), locomotive_(locomotive) {}

        ~Train() override = default;

    protected:
        void print(std::ostream& os) const override
        {
            if (wagons_)
            {
                os << *wagons_;
                if (locomotive_)
                {
                    os << "-";
                }
            }
            if (locomotive_)
            {
                os << *locomotive_;
            }
        }
    private:
        Wagons* wagons_;
        ALocomotive* locomotive_{};
    };
}
